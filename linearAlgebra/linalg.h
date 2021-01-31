#include <vector>

std::vector<std::vector<double>> jacobMethod(std::vector<double> init_x, std::vector<std::vector<double>> A, std::vector<double> b);
std::vector<double> gaussJordanElimination(std::vector<std::vector<double>> Ab);
void showMatrix(std::vector<std::vector<double>> A);
