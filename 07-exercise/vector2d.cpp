#include "vector2d.h"
#include <cmath>

// Constructor
v2d::v2d(double a, double b) {
    x = a;
    y = b;
}

// Copy Constructor
v2d::v2d(const v2d & v) {
    x = v.x;
    y = v.y;
}

// Destructor
v2d::~v2d() {}

// Assign one v2d object to another.
// Return type v2d &, the & means you’re returning a reference to a v2d object
// In parameter const v2d &v, &v cant be changed. 
v2d & v2d::operator=(const v2d &v) {
    if (this != &v){
        x = v.x;
        y = v.y;
    }
    return *this;
}

// Addition
v2d & v2d::operator+(const v2d &v) {
    x += v.x;
    y += v.y;
    return *this;
}

// Scalar product
double v2d::operator*(const v2d &v) {
    return x * v.x + y * v.y;
}

// Scalar multiplication
v2d & v2d::operator*(double k) {
    x *= k;
    y *= k;
    return *this;
}

// Length of vector
double v2d::length() {
    return sqrt(x * x + y * y);
}

