#include "shapes.h"
#include <iostream>

// _height = height (same as this.height = height in Java)

Rectangle::Rectangle(double height, double width) : _height(height), _width(width){}

double Rectangle::area(){
    return _height * _width;
}

double Rectangle::perimeter(){
    return (_height + _width) * 2;
}

double Rectangle::height(){
    return _height;
}

double Rectangle::width(){
    return _width;
}

void Rectangle::rotate(){
    std::swap(_height, _width);
}

Circle::Circle(double radius) : _radius(radius) {}

double Circle::area(){
    return M_PI * pow(_radius, 2);
}

double Circle::perimeter(){
    return 2 * M_PI * _radius;
}

double Circle::height(){
    return _radius * 2;
}

double Circle::width(){
    return _radius * 2; 
}

void Circle::rotate(){}

Square::Square(double side) : Rectangle(side, side) {}

