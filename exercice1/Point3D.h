#ifndef POINT3D_H
#define POINT3D_H

class Point3D {
private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point3D();
    Point3D(double xVal, double yVal, double zVal);

    // Accessors
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif