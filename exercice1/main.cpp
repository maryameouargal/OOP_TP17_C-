#include <iostream>
#include "Point3D.h"

using namespace std;

int main() {
    Point3D origin;
    Point3D somewhere(1.5, -2.0, 4.25);

    cout << "First point : ("
         << origin.getX() << ", "
         << origin.getY() << ", "
         << origin.getZ() << ")" << endl;

    cout << "Second point: ("
         << somewhere.getX() << ", "
         << somewhere.getY() << ", "
         << somewhere.getZ() << ")" << endl;

    return 0;
}