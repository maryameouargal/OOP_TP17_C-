#include "Triangle.h"

Triangle::Triangle() {
    // Three points, all at (0,0) by default
}

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3) {
    a = p1;
    b = p2;
    c = p3;
}

Point Triangle::getA() const { return a; }
Point Triangle::getB() const { return b; }
Point Triangle::getC() const { return c; }

double Triangle::perimetre() const {
    double ab = a.distanceTo(b);
    double bc = b.distanceTo(c);
    double ca = c.distanceTo(a);
    return ab + bc + ca;
}