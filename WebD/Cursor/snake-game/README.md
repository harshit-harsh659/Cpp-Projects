# Snake Game (React + Canvas + Tailwind)

Production-ready Snake game built with React (functional components, hooks), HTML5 Canvas, and Tailwind CSS. No external game libraries.

## Tailwind setup

This project is already configured for Tailwind:

- **tailwind.config.js** – `content: ['./index.html', './src/**/*.{js,ts,jsx,tsx}']`
- **postcss.config.js** – `tailwindcss` and `autoprefixer` plugins
- **src/index.css** – `@tailwind base;`, `@tailwind components;`, `@tailwind utilities;`

To add Tailwind to an existing React app:

1. Install: `npm i -D tailwindcss postcss autoprefixer` then `npx tailwindcss init -p`
2. In `tailwind.config.js` set `content: ["./index.html", "./src/**/*.{js,ts,jsx,tsx}"]`
3. In your main CSS add the three `@tailwind` directives above

## Run locally

```bash
cd snake-game
npm install
npm run dev
```

Open the URL shown (e.g. http://localhost:5173).

## Controls

- **Arrow keys** – move
- **Space** – pause / resume
- **Restart** – click after Game Over

## Build

```bash
npm run build
npm run preview
```
