#ifndef MATRIX_HEADERS_HPP_
#define MATRIX_HEADERS_HPP_

class vector;

class matrix {
    private:
        unsigned int pRow, pCol;
        double** pData;
    public:
        // Special members
        matrix() : pRow(0), pCol(0), pData(new double*[0]) {};
        matrix(unsigned int row, unsigned int col) : pRow(row), pCol(col), pData(new double*[row]) {
            for (int i = 0; i < row; ++i) pData[i] = new double[col];
        };
        ~matrix() {
            for (int i = 0; i < pRow; ++i) delete pData[i];
            delete pData;
        };

        // Memory access operators
        inline double& operator()(unsigned int i, unsigned int j) { return pData[i][j]; };

        // Algebraic operations
        matrix& operator=(const matrix& rhs);
        matrix& operator+=(const matrix& rhs);
        matrix& operator-=(const matrix& rhs);
        matrix& operator*=(double a);
        matrix& operator/=(double a);
};

vector operator*(const vector& lhs, const matrix& rhs);
vector operator*(const matrix& lhs, const vector& rhs);

#endif // MATRIX_HEADERS_HPP

