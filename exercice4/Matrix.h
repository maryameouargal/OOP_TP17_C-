#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

template <typename T, int N, int M>
class Matrix {
private:
    T data[N][M];   

public:
    // Default constructor
    Matrix() {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                data[i][j] = T();
            }
        }
    }

    // Read-only and read-write accessors
    T at(int i, int j) const {
        return data[i][j];
    }

    void set(int i, int j, T value) {
        data[i][j] = value;
    }

    // Addition: only valid if the dimensions match
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Multiplication: (N x M) * (M x P) = (N x P)
    template <int P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& other) const {
        Matrix<T, N, P> result;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < P; ++j) {
                T sum = T();
                for (int k = 0; k < M; ++k) {
                    sum += data[i][k] * other.at(k, j);
                }
                result.set(i, j, sum);
            }
        }
        return result;
    }
};

// Operator<< : friend so it can access data[][] if needed
template <typename T, int N, int M>
std::ostream& operator<<(std::ostream& os, const Matrix<T, N, M>& m) {
    for (int i = 0; i < N; ++i) {
        os << "| ";
        for (int j = 0; j < M; ++j) {
            os << m.at(i, j) << " ";
        }
        os << "|" << std::endl;
    }
    return os;
}

#endif