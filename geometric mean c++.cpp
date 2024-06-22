#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3, num4;
    
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    double multiplication = num1 * num2 * num3 * num4;
    double geometricMean = pow(multiplication, 1.0 / 4.0);

    cout << "Multiplication of the given numbers: " << multiplication << endl;
    cout << "Geometric mean of the given numbers: " << geometricMean << endl;

    return 0;
}

