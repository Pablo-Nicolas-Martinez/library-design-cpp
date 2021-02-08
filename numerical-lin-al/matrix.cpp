#include "vector.hpp"
#include "matrix.hpp"

matrix& matrix::operator=(const matrix& rhs) {
    return *this;
}

matrix& matrix::operator+=(const matrix& rhs) {
    for (int i = 0; i < pRow; ++i) {
        for (int j = 0; j < pCol; ++j) pData[i][j] += rhs.pData[i][j];
    }
    return *this;
}

matrix& matrix::operator+=(const matrix& rhs) {
    for (int i = 0; i < pRow; ++i) {
        for (int j = 0; j < pCol; ++j) pData[i][j] += rhs.pData[i][j];
    }
    return *this;
}

matrix& matrix::operator-=(const matrix& rhs) {
    for (int i = 0; i < pRow; ++i) {
        for (int j = 0; j < pCol; ++j) pData[i][j] -= rhs.pData[i][j];
    }
    return *this;
}

matrix& matrix::operator*=(double a) {
    for (int i = 0; i < pRow; ++i) {
        for (int j = 0; j < pCol; ++j) pData[i][j] *= a;
    }
    return *this;
}

matrix& matrix::operator/=(double a) {
    for (int i = 0; i < pRow; ++i) {
        for (int j = 0; j < pCol; ++j) pData[i][j] /= a;
    }
    return *this;
}

// TODO: Implementation of the vector operations
