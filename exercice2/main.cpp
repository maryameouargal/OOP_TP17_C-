#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {
    Point p1(0.0, 0.0);
    Point p2(4.0, 0.0);
    Point p3(0.0, 3.0);

    Triangle tri(p1, p2, p3);

    cout << "Triangle vertices:" << endl;
    cout << "  A = (" << tri.getA().getX() << ", " << tri.getA().getY() << ")" << endl;
    cout << "  B = (" << tri.getB().getX() << ", " << tri.getB().getY() << ")" << endl;
    cout << "  C = (" << tri.getC().getX() << ", " << tri.getC().getY() << ")" << endl;

    cout << "Perimeter = " << tri.perimetre() << endl;

    // Bonus: use Segment too
    Segment s(p1, p2);
    cout << "Length of AB = " << s.longueur() << endl;

    return 0;
}