#include <iostream>
#include "vector.cpp"
#include "matrix.hpp"

int main() {
    vector u(3);
    for (int i = 0; i < 3; ++i) std::cout << "The element is " << u[i] << std::endl;
    std::cout << std::endl;

    matrix M(2, 2);
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) std::cout << M(i, j) << std::endl;
    }
    std::cout << std::endl;
}
