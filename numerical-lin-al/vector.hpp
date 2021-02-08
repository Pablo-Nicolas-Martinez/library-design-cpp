#ifndef VECTOR_HEADER_DEF_
#define VECTOR_HEADER_DEF_

#include <cmath>

class vector {
    private:
        unsigned int pDim;
        double* pData;
    public:
        vector() : pDim(0), pData(new double) {}; // Default constructor
        vector(unsigned int dim) : pDim(dim), pData(new double[dim]) {};
        vector(const vector& u) : pDim(u.pDim), pData(new double[u.pDim]) {};
        ~vector() { delete pData; }

        // Access operators
        double& operator[](unsigned int i) { return pData[i]; }

        // Algebraic operations
        vector& operator=(const vector& rhs);
        vector& operator+=(const vector& rhs);
        vector& operator-=(const vector& rhs);
        vector& operator*=(double a);
        vector& operator/=(double a);

        // Vector operations
        double norma2();
};

// Binary algebraic operators
inline vector& operator+(vector lhs, const vector& rhs) { return lhs += rhs; }
inline vector& operator-(vector lhs, const vector& rhs) { return lhs -= rhs; }
inline vector& operator*(vector lhs, double a) { return lhs *= a; }
inline vector& operator/(vector lhs, double a) { return lhs /= a; }
inline vector& operator*(double a, vector rhs) { return rhs *= a; }
inline vector& operator/(double a, vector rhs) { return rhs /= a; }

double operator*(const vector& lhs, const vector& rhs);
inline double dot(const vector& lhs, const vector& rhs) { return lhs*rhs; }

#endif // VECTOR_HEADER_DEF_
