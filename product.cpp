#include <iostream>

int main() {
    int num1, num2, result = 0;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    for (int i = 0; i < num2; ++i) {
        result += num1;
    }

    std::cout << "The product is: " << result << std::endl;

    return 0;
}

