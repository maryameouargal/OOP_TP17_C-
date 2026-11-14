#include "Point3D.h"

// Default constructor 
Point3D::Point3D() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Parameterized constructor
Point3D::Point3D(double xVal, double yVal, double zVal) {
    x = xVal;
    y = yVal;
    z = zVal;
}

// Accessors
double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }
