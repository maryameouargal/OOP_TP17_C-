#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Segment.h"

class Triangle {
private:
    Point a;
    Point b;
    Point c;

public:
    Triangle();
    Triangle(const Point& p1, const Point& p2, const Point& p3);

    Point getA() const;
    Point getB() const;
    Point getC() const;

    double perimetre() const;
};

#endif