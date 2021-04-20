#include <iostream> 
#include "linalg.h"

int main() {
    
    vector<vector<double>> A(2, vector<double>(2));
    vector<vector<double>> Ab(3, vector<double>(3));
    vector<double> init_x(2);
    vector<double> b;
    
    A = {{2, 1}, {5, 7}};
    b = {11, 13};
    Ab = {{2, 1, 11}, {5, 7, 13}};
    //Ab = {{0, 1, 11}, {5, 7, 13}};
    LinearAlgebra LA;

    std::cout << "---Coefficient Matrix---" << std::endl;
    LA.showMatrix(A);

    std::cout << "---Augmented Matrix---" << std::endl;
    LA.showMatrix(Ab);

    //vector<vector<double>> B = jacobMethod(init_x, A, b);

    std::cout << "---Solution to the Augmented Matrix eliminated by Gauss jordan---" << std::endl;
    vector<double> X = LA.gaussJordanElimination(Ab);
    for (auto elem : X) {
        cout << elem << endl;
    }
    
    return 0;
}