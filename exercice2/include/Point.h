#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(double xVal, double yVal);

    double getX() const;
    double getY() const;

    // Distance between this point and another one
    double distanceTo(const Point& other) const;
};

#endif