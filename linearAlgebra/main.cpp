#include <iostream> 
#include <vector>
#include "linalg.h"

int main() {
    std::vector<std::vector<double>> A(2, std::vector<double>(2));
    std::vector<std::vector<double>> Ab(3, std::vector<double>(3));
    std::vector<double> init_x(2);
    std::vector<double> b;
    
    A = {{2, 1}, {5, 7}};
    b = {11, 13};
    Ab = {{2, 1, 11}, {5, 7, 13}};
    showMatrix(A);
    showMatrix(Ab);

    //std::vector<std::vector<double>> B = jacobMethod(init_x, A, b);
    
    std::vector<double> X = gaussJordanElimination(Ab);
    for (auto elem : X) {
        std::cout << elem << std::endl;
    }
    
    return 0;
}