#include "matrix.hpp"
#include <iostream>

int main() {
    matrix<2, 3> A;
    matrix<3, 2> B;
    
    for (int i = 0; i < A.rows(); ++i) {
        for (int j = 0; j < A.cols(); ++j) std::cout << A(i, j);
        std::cout << std::endl;
    }

    for (int i = 0; i < B.rows(); ++i) {
        for (int j = 0; j < B.cols(); ++j) std::cout << B(i, j);
        std::cout << std::endl;
    }
}
