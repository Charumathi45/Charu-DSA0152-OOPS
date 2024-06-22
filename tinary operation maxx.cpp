#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    std::cout << "Maximum number: " << max << std::endl;

    return 0;
}

