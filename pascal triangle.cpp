#include <iostream>

void generatePascalsTriangle(int numRows) {
    int triangle[numRows][numRows];
    
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }
    
   
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int numRows;
    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    std::cin >> numRows;
    
    generatePascalsTriangle(numRows);
    
    return 0;
}

