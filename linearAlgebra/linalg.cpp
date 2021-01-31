#ifndef LINALG_H
#define LINALG_H
#include <vector>
#include <iostream> 
#include "linalg.h"
#include <stdlib.h> 

std::vector<std::vector<double>> jacobMethod(std::vector<double> init_x, std::vector<std::vector<double>> A, std::vector<double> b) {
    int k = 0;              // kth iteration
    int n = (int)A.size();  // the size of the matrix A
     
    // while (true) {
    //     int sigma = 0;
        
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < n; j++) {
    //             if (i != j) {
    //                 sigma = sigma + A.at(i).at(j) * x.at(j);
    //             }            
    //         }
    //     }
    
    // }
    return A;
}

std::vector<double> gaussJordanElimination(std::vector<std::vector<double>> Ab) {
    //Args:
    //  Ab: an augmented matrix (size n * n + 1)
    //Returns:
    //  X: a solution vector (size n).
    
    // Todo: the diagonal elements of Ab must be non-zero, 
    // but there are cases where we want handle such matrices. 

    int n = (int)Ab.size(); //the number of rows

    for (int i = 0; i < n; ++i) {
        
        if (Ab.at(i).at(i) == 0.0) {
            std::cout << "Divide by zero detected" << std::endl;
            exit (EXIT_FAILURE);
        }
 
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                // This part corresponds to row operation to obtain diagonal matrix whose all element is one.
                double ratio = Ab.at(j).at(i) / Ab.at(i).at(i);
                for (int k = 0; k < n + 1; ++k) { 
                    Ab.at(j).at(k) = Ab.at(j).at(k) - ratio * Ab.at(i).at(k); // Eliminates the element Ab.at(j).at(k) underneath the pivot Ab.at(j).at(i)
                }
            }
        }
    }

    std::vector<double> X(n);
    for (int i = 0; i < n; ++i) {
        X.at(i) = Ab.at(i).at(n) / Ab.at(i).at(i);
    }

    return X;
}

void showMatrix(std::vector<std::vector<double>> A) {
    for (int i = 0; i < (int)A.size(); i++) {
        for (int j = 0; j < (int)A.at(1).size(); j++) {
            std::cout << A.at(i).at(j) << ' ';
        }
        std::cout << std::endl;
    }    
}

#endif 