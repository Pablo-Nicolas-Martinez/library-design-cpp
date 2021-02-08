#include "matrix.hpp"

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>::matrix() {
    pData = new double* [nRow];
    for (int i = 0; i < nRow; ++i) pData[i] = new double [nCol];
}

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>::~matrix() {
    for (int i = 0; i < nRow; ++i) delete pData[i];
    delete pData;
}

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>& matrix<nRow, nCol>::operator=(const matrix<nRow, nCol>& rhs) {
    return *this;
}

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>& matrix<nRow, nCol>::operator+=(const matrix<nRow, nCol>& rhs) {
    // Check dimensions
    for (int i = 0; i < nRow; ++i)
        for (int j = 0; j < nRow; ++j) pData[i][j] += rhs.pData[i][j];
    return *this;
}

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>& matrix<nRow, nCol>::operator-=(const matrix<nRow, nCol>& rhs) {
    for (int i = 0; i < nRow; ++i)
        for (int j = 0; j < nRow; ++j) pData[i][j] -= rhs.pData[i][j];
    return *this;
}

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>& matrix<nRow, nCol>::operator*=(double a) {
    for (int i = 0; i < nRow; ++i)
        for (int j = 0; j < nRow; ++j) pData[i][j] *= a;
    return *this;
}

template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>& matrix<nRow, nCol>::operator/=(double a) {
    for (int i = 0; i < nRow; ++i)
        for (int j = 0; j < nRow; ++j) pData[i][j] /= a;
    return *this;
}
/*
template<unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol>& matrix<nRow, nCol>::operator+=(const matrix<nRow, nCol>& rhs) {
    for (int i = 0; i < nRow; ++i)
        for (int j = 0; j < nRow; ++j) pData[i][j] += rhs.pData[i][j];
    return *this;
}
*/
template <unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol> operator*(const matrix<nRow, nCol>& lhs, const matrix<nRow, nCol> rhs) {
    // Check dimensions appropriately
    matrix<lhs.rows(), rhs.cols()> res;
    for (int i = 0; i < lhs.nRows; ++i)
        for (int j = 0; j < rhs.nCols; ++j) {
            double sum = 0;
            for (int k = 0; j < lhs.cols(); ++k) sum += lhs.pData[i][k]*rhs.pData[k][j];
        }
    return res;
}
