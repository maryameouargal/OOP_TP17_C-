#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    //  2x2 integers 
    Matrix<int, 2, 2> A;
    A.set(0, 0, 1); A.set(0, 1, 2);
    A.set(1, 0, 3); A.set(1, 1, 4);

    Matrix<int, 2, 2> B;
    B.set(0, 0, 5); B.set(0, 1, 6);
    B.set(1, 0, 7); B.set(1, 1, 8);

    Matrix<int, 2, 2> C = A + B;
    Matrix<int, 2, 2> D = A * B;

    cout << "A = " << endl << A;
    cout << "B = " << endl << B;
    cout << "A + B = " << endl << C;
    cout << "A * B = " << endl << D;

    // 3x3 doubles 
    Matrix<double, 3, 3> I;
    I.set(0, 0, 1.0);
    I.set(1, 1, 1.0);
    I.set(2, 2, 1.0);

    Matrix<double, 3, 3> P;
    P.set(0, 0, 2.5); P.set(1, 1, -1.0); P.set(2, 2, 4.0);

    Matrix<double, 3, 3> R = I + P;
    cout << "Identity + P = " << endl << R;

    return 0;
}