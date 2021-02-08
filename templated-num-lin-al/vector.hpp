#ifndef MATRIX_HEADER_HPP_
#define MATRIX_HEADER_HPP_

template <unsigned int nRow, unsigned int nCol>
class matrix {
    private:
        double pData[nRow][nCol];
    public:
        // Special members
        matrix();
        matrix(const matrix& rhs<nRowl, nColr>);
        ~matrix();

        // Operators for memory access
        inline unsigned int rows { return nRow; };
        inline unsigned int cols { return nCol; };
        double& operator()(unsigned int i, unsigned int j);

        // Algebraic operators and overloads
        matrix& operator=(const template<unsigned int nRowr, unsigned int nColr> matrix& rhs);
        matrix& operator+=(const template<unsigned int nRowr, unsigned int nColr> matrix& rhs);
        matrix& operator-=(const template<unsigned int nRowr, unsigned int nColr> matrix& rhs);
        matrix& operator*=(double a);
        matrix& operator/=(double a);
};

template <unsigned int nRow, unsigned int nCol>
matrix operator*(const template <unsigned int nRowl, unsigned int nColl> matrix& lhs, 
                 const template <unsigned int nRowr, unsigned int nColr> matrix& rhs);

#endif // MATRIX_HEADER_HPP_
