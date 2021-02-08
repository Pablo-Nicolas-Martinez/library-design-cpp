#include "vector.hpp"

vector& vector::operator=(const vector& rhs) {
    return *this;
}

vector& vector::operator+=(const vector& rhs) {
    for (int i = 0; i < pDim; ++i) pData[i] += rhs.pData[i];
    return *this;
}

vector& vector::operator-=(const vector& rhs) {
    for (int i = 0; i < pDim; ++i) pData[i] -= rhs.pData[i];
    return *this;
}

vector& vector::operator*=(double a) {
    for (int i = 0; i < pDim; ++i) pData[i] *= a;
    return *this;
}

vector& vector::operator/=(double a) {
    for (int i = 0; i < pDim; ++i) pData[i] /= a;
    return *this;
}

// Norms operations and some things

double vector::norma2() {
    double sum;
    for (int i = 0; i < pDim; ++i) sum += pData[i]*pData[i];
    return sqrt(sum);
}

