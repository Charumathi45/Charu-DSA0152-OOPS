#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " is " << factorial << std::endl;

    return 0;
}

