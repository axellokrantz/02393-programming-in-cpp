#include <cmath>

// protected: can be accessed by the classitself (shape)
// or other classes that inherit the shape class. Circle for example.
// "public" defines the access level Rectangle has from Shape for example.
// virtual ~Shape() {} destructor

class Shape {
    public:
        virtual ~Shape() {}
        virtual double area() = 0;
        virtual double perimeter() = 0;
        virtual double height() = 0;
        virtual double width() = 0;
        virtual void rotate() = 0;
};

class Rectangle : public Shape {
    protected:
        double _height;
        double _width;
    public:
        Rectangle(double width, double height);
        double area() override;
        double perimeter() override;
        double height() override;
        double width() override;
        void rotate() override;
};

class Circle : public Shape {
    protected:
        double _radius;
    public:
        Circle(double radius);
        double area() override;
        double perimeter() override;
        double height() override;
        double width() override;
        void rotate() override;
};

class Square : public Rectangle {
    public:
        Square(double side);
};

