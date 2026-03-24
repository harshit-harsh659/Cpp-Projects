import { useState, useEffect, useRef, useCallback } from 'react';

const GRID_SIZE = 20;
const CANVAS_SIZE = 400;
const CELL_SIZE = CANVAS_SIZE / GRID_SIZE;
const INITIAL_SPEED_MS = 150;
const MIN_SPEED_MS = 50;
const SPEED_DECREMENT = 5;

const INITIAL_SNAKE = [
  { x: 10, y: 10 },
  { x: 9, y: 10 },
  { x: 8, y: 10 },
];

const DIRECTIONS = {
  ArrowUp: { dx: 0, dy: -1 },
  ArrowDown: { dx: 0, dy: 1 },
  ArrowLeft: { dx: -1, dy: 0 },
  ArrowRight: { dx: 1, dy: 0 },
};

function isOpposite(current, next) {
  return current.dx === -next.dx && current.dy === -next.dy;
}

/**
 * Food spawning logic: random grid cell that must not overlap any snake segment.
 * Keeps generating (x, y) until a position not in the snake array is found.
 */
function getRandomFood(snake) {
  let x, y;
  let attempts = 0;
  const maxAttempts = GRID_SIZE * GRID_SIZE;
  do {
    x = Math.floor(Math.random() * GRID_SIZE);
    y = Math.floor(Math.random() * GRID_SIZE);
    attempts++;
    if (attempts > maxAttempts) break;
  } while (snake.some((seg) => seg.x === x && seg.y === y));
  return { x, y };
}

export default function SnakeGame() {
  const [snake, setSnake] = useState(INITIAL_SNAKE);
  const [food, setFood] = useState(() => getRandomFood(INITIAL_SNAKE));
  const [direction, setDirection] = useState({ dx: 1, dy: 0 });
  const [score, setScore] = useState(0);
  const [speed, setSpeed] = useState(INITIAL_SPEED_MS);
  const [gameOver, setGameOver] = useState(false);
  const [paused, setPaused] = useState(false);

  const canvasRef = useRef(null);
  const gameLoopRef = useRef(null);
  const directionRef = useRef(direction);
  const foodRef = useRef(food);
  directionRef.current = direction;
  foodRef.current = food;

  const resetGame = useCallback(() => {
    const initialSnake = [...INITIAL_SNAKE];
    setSnake(initialSnake);
    setFood(getRandomFood(initialSnake));
    setDirection({ dx: 1, dy: 0 });
    setScore(0);
    setSpeed(INITIAL_SPEED_MS);
    setGameOver(false);
    setPaused(false);
  }, []);

  useEffect(() => {
    const handleKeyDown = (e) => {
      if (e.key === ' ') {
        e.preventDefault();
        setPaused((prev) => !prev);
        return;
      }
      const next = DIRECTIONS[e.key];
      if (!next) return;
      e.preventDefault();
      setDirection((prev) => {
        if (isOpposite(prev, next)) return prev;
        return next;
      });
    };
    window.addEventListener('keydown', handleKeyDown);
    return () => window.removeEventListener('keydown', handleKeyDown);
  }, []);

  // Game loop: interval runs while playing; each tick moves snake, checks collisions and food
  useEffect(() => {
    if (gameOver || paused) return;

    const tick = () => {
      const d = directionRef.current;
      setSnake((prevSnake) => {
        const head = prevSnake[0];
        const newHead = { x: head.x + d.dx, y: head.y + d.dy };

        // Collision logic: wall = head outside grid; self = head overlaps any segment
        const wallCollision =
          newHead.x < 0 ||
          newHead.x >= GRID_SIZE ||
          newHead.y < 0 ||
          newHead.y >= GRID_SIZE;
        const selfCollision = prevSnake.some(
          (seg) => seg.x === newHead.x && seg.y === newHead.y
        );
        if (wallCollision || selfCollision) {
          setGameOver(true);
          return prevSnake;
        }

        const currentFood = foodRef.current;
        const ateFood = newHead.x === currentFood.x && newHead.y === currentFood.y;
        const newSnake = [newHead, ...prevSnake];
        if (!ateFood) newSnake.pop();

        if (ateFood) {
          setScore((s) => s + 1);
          setSpeed((sp) => Math.max(MIN_SPEED_MS, sp - SPEED_DECREMENT));
          setFood(() => getRandomFood(newSnake));
        }

        return newSnake;
      });
    };

    const id = setInterval(tick, speed);
    gameLoopRef.current = id;
    return () => {
      clearInterval(id);
      gameLoopRef.current = null;
    };
  }, [gameOver, paused, speed]);

  useEffect(() => {
    const canvas = canvasRef.current;
    if (!canvas) return;

    const ctx = canvas.getContext('2d');
    if (!ctx) return;

    ctx.fillStyle = '#1a1a2e';
    ctx.fillRect(0, 0, CANVAS_SIZE, CANVAS_SIZE);

    ctx.strokeStyle = '#16213e';
    ctx.lineWidth = 1;
    for (let i = 0; i <= GRID_SIZE; i++) {
      ctx.beginPath();
      ctx.moveTo(i * CELL_SIZE, 0);
      ctx.lineTo(i * CELL_SIZE, CANVAS_SIZE);
      ctx.stroke();
      ctx.beginPath();
      ctx.moveTo(0, i * CELL_SIZE);
      ctx.lineTo(CANVAS_SIZE, i * CELL_SIZE);
      ctx.stroke();
    }

    snake.forEach((seg, i) => {
      const isHead = i === 0;
      ctx.fillStyle = isHead ? '#0d9488' : '#2dd4bf';
      const padding = isHead ? 0 : 1;
      ctx.fillRect(
        seg.x * CELL_SIZE + padding,
        seg.y * CELL_SIZE + padding,
        CELL_SIZE - padding * 2,
        CELL_SIZE - padding * 2
      );
    });

    ctx.fillStyle = '#fbbf24';
    ctx.beginPath();
    const fx = food.x * CELL_SIZE + CELL_SIZE / 2;
    const fy = food.y * CELL_SIZE + CELL_SIZE / 2;
    ctx.arc(fx, fy, CELL_SIZE / 2 - 2, 0, Math.PI * 2);
    ctx.fill();

    if (gameOver) {
      ctx.fillStyle = 'rgba(0, 0, 0, 0.7)';
      ctx.fillRect(0, 0, CANVAS_SIZE, CANVAS_SIZE);
      ctx.fillStyle = '#f8fafc';
      ctx.font = 'bold 32px system-ui, sans-serif';
      ctx.textAlign = 'center';
      ctx.textBaseline = 'middle';
      ctx.fillText('Game Over', CANVAS_SIZE / 2, CANVAS_SIZE / 2 - 24);
      ctx.font = '18px system-ui, sans-serif';
      ctx.fillText(`Score: ${score}`, CANVAS_SIZE / 2, CANVAS_SIZE / 2 + 16);
    } else if (paused) {
      ctx.fillStyle = 'rgba(0, 0, 0, 0.5)';
      ctx.fillRect(0, 0, CANVAS_SIZE, CANVAS_SIZE);
      ctx.fillStyle = '#f8fafc';
      ctx.font = 'bold 24px system-ui, sans-serif';
      ctx.textAlign = 'center';
      ctx.textBaseline = 'middle';
      ctx.fillText('Paused', CANVAS_SIZE / 2, CANVAS_SIZE / 2);
    }
  }, [snake, food, gameOver, paused, score]);

  return (
    <div className="min-h-screen bg-slate-900 flex flex-col items-center justify-center p-4">
      <div className="flex flex-col items-center gap-6">
        <h1 className="text-2xl font-bold text-slate-100 tracking-wide">
          Snake
        </h1>
        <p className="text-slate-300 text-lg font-medium">Score: {score}</p>
        <div className="relative">
          <canvas
            ref={canvasRef}
            width={CANVAS_SIZE}
            height={CANVAS_SIZE}
            className="rounded-lg border-2 border-slate-600 shadow-xl"
            style={{ display: 'block' }}
          />
          {gameOver && (
            <div className="absolute inset-0 flex items-center justify-center rounded-lg bg-black/60">
              <div className="bg-slate-800 rounded-xl px-8 py-6 text-center shadow-2xl border border-slate-600">
                <p className="text-xl font-bold text-slate-100 mb-2">
                  Game Over
                </p>
                <p className="text-slate-300 mb-4">Score: {score}</p>
                <button
                  type="button"
                  onClick={resetGame}
                  className="px-6 py-2.5 bg-teal-600 hover:bg-teal-500 text-white font-semibold rounded-lg transition-colors"
                >
                  Restart
                </button>
              </div>
            </div>
          )}
        </div>
        <p className="text-slate-500 text-sm">
          Arrow keys to move · Space to pause
        </p>
      </div>
    </div>
  );
}
