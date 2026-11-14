#include "Point.h"
#include <cmath>   
Point::Point() {
    x = 0.0;
    y = 0.0;
}

Point::Point(double xVal, double yVal) {
    x = xVal;
    y = yVal;
}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

double Point::distanceTo(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return std::sqrt(dx * dx + dy * dy);
}