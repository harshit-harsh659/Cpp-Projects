#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


class Shape {
    static int x;

    public:
        Shape(){
            x++;
        }

        virtual void area()=0;

        static int get_count(){
            return x;
        }
};

int Shape::x = 0;

template <class T>
class Circle : public  Shape{
    const double pie=3.14;
    T radius;

    public:
        Circle(T r): radius(r){};
        void area(){
            cout<<"The area of the circle is: "<<pie*radius*radius<<"."<<endl;
        }

};

template <class T>
class Rectangle : public Shape{
    T length;
    T breadth;

    public:
        Rectangle(T l, T b): length(l), breadth(b){};
        void area(){
            cout<<"The area of the rectangle is: "<<length*breadth<<"."<<endl;
        }
};

template <class T>
class Square : public Shape{
    T side;

    public:
        Square(T s): side(s){};
        void area(){
            cout<<"The area of the square is: "<<side*side<<"."<<endl;
        }
};

template <class T>
class Triangle: public Shape{
    T base;
    T height;

    public:
        Triangle(T b, T h): base(b), height(h){};
        void area(){
            cout<<"The area of the triangle is: "<<0.5*base*height<<"."<<endl;
        }
};

int main() {
    cout<<string(10, '\n')<<endl;
    cout << "Starting program..." << endl;
    cout<<endl;
    vector<Shape*> shapes;

    shapes.push_back(new Circle<double>(3.14));
    shapes.push_back(new Rectangle<float>(4.3, 9));
    shapes.push_back(new Square<int>(6));
    shapes.push_back(new Triangle<double>(4.1, 8.7));

    cout<<"Total shapes: "<<Shape::get_count()<<endl<<endl;
    
    for(auto shape: shapes) {
        shape->area();
    }

    for(auto shape: shapes) {
        delete shape;
    }
    
    return 0;
}