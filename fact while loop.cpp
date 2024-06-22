#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1;
    int i = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (i <= n) {
        factorial *= i;
        ++i;
    }

    std::cout << "Factorial of " << n << " is " << factorial << std::endl;

    return 0;
}

