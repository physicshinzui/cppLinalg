#include <iostream> 
#include <stdlib.h> 
#include "linalg.h"

vector<vector<double>> LinearAlgebra::jacobMethod(vector<double> init_x, vector<vector<double>> A, vector<double> b) {
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

vector<double> LinearAlgebra::gaussJordanElimination(vector<vector<double>> Ab) {
    //Args:
    //  Ab: an augmented matrix (size n * n + 1)
    //Returns:
    //  X: a solution vector (size n).
    
    // Todo: the diagonal elements of Ab must be non-zero, 
    // but there are cases where we want handle such matrices. 

    int n = (int)Ab.size(); //the number of rows

    for (int i = 0; i < n; ++i) {
        
        if (Ab.at(i).at(i) == 0.0) {
            cout << "Divide by zero detected" << endl;
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

    vector<double> X(n);
    for (int i = 0; i < n; ++i) {
        X.at(i) = Ab.at(i).at(n) / Ab.at(i).at(i);
    }

    return X;
}

void LinearAlgebra::showMatrix(vector<vector<double>> A) {
    for (int i = 0; i < (int)A.size(); i++) {
        for (int j = 0; j < (int)A.at(1).size(); j++) {
            cout << A.at(i).at(j) << ' ';
        }
        cout << endl;
    }    
}

vector<vector<double>> LUDecomposition(vector<vector<double>> A) {
    // Args:
    //   A: squared matrix
    // Returns:
    //   L, U: lower trinangular and upper triangular matrices.

    // Create zero matrices for L and U. 

    // Create pivot matrix P and the multplied matrix PA

    // Perform LU decomposition

    //

    vector<vector<double>> L;
    vector<vector<double>> U;

    return L;
}