#ifndef MATRIX_HEADER_HPP_
#define MATRIX_HEADER_HPP_

template <unsigned int nRow, unsigned int nCol>
class matrix {
    private:
        double** pData;
    public:
        // Special members
        matrix();
        ~matrix();
        
        // Operators for memory access
        inline unsigned int rows() { return nRow; };
        inline unsigned int cols() { return nCol; };
        inline double& operator()(unsigned int i, unsigned int j) { return pData[i][j]; };
        inline const double& operator()(unsigned int i, unsigned int j) const { return pData[i][j]; };

        // Algebraic operators and overloads
        matrix& operator=(const matrix& rhs);
        matrix& operator+=(const matrix& rhs);
        matrix& operator-=(const matrix& rhs);
        matrix& operator*=(double a);
        matrix& operator/=(double a);
};

template <unsigned int nRow, unsigned int nCol>
inline matrix<nRow, nCol> operator+(matrix<nRow, nCol> lhs, const matrix<nRow, nCol>& rhs) { return lhs += rhs; };

template <unsigned int nRow, unsigned int nCol>
inline matrix<nRow, nCol> operator-(matrix<nRow, nCol> lhs, const matrix<nRow, nCol>& rhs) { return lhs -= rhs; };

template <unsigned int nRow, unsigned int nCol>
matrix<nRow, nCol> operator*(const matrix<nRow, nCol>& lhs, const matrix<nRow, nCol>& rhs);

#endif // MATRIX_HEADER_HPP_
