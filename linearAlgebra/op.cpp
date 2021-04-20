#include <iostream> 
#include <vector> 

template<typename T> 
void printMatrix(const T &A, int n, int m)
{
    for (int i{0}; i < n; ++i)
    {
        for (int j{0}; j < m; ++j)
        {
            std::cout << A[i][j] << ' ';            
        }
        std::cout << "\n";
    } 
}

template<typename T>
std::pair<int, int> size_2d(const T &A)
{
    int nrows = sizeof(A) / sizeof(A[0]);
    int ncols = sizeof(A[0]) / sizeof(A[0][0]);
    std::pair<int, int> size; 
    size.first  = nrows;
    size.second = ncols;
    return size;
}


template<typename T>
T matmul(const T &A, const T &B)
{
    return 0;
}


#ifdef _TEST 
int main()
{
    int A[2][2] { {1,2}, {3,4} };
    int B[2][2] { {1,2}, {3,4} };
    // std::cout << "*** Matrix A *** " << std::endl;
    printMatrix(A,2,2);

    // std::cout << "*** Matrix B *** " << std::endl;
    // std::cout << B[0][0] << ' ' << B[0][1] << std::endl;
    // std::cout << B[1][0] << ' ' << B[1][1] << std::endl;
//    matmul(A, B);
//    std::pair<int, int> size;
//    std::cout << size_2d(A).second << std::endl;
}
#endif 