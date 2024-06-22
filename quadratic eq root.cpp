#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and distinct: " << root1 << " and " << root2 << std::endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        std::cout << "Roots are real and equal: " << root1 << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex: " 
                  << realPart << " + " << imaginaryPart << "i and " 
                  << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}

