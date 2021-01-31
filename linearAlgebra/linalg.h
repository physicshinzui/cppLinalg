#include <vector>
using std::vector;
using std::cout;
using std::endl;

class LinearAlgebra{ 
    private:

    public:
        vector<vector<double>> jacobMethod(vector<double> init_x, vector<vector<double>> A, vector<double> b);
        vector<double> gaussJordanElimination(vector<vector<double>> Ab);
        void showMatrix(vector<vector<double>> A);
};