#include <iostream>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

void generatePowersOfTwo(int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << (1LL << i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (isPowerOfTwo(n)) {
        std::cout << n << " is a power of 2." << std::endl;
    } else {
        std::cout << n << " is not a power of 2." << std::endl;
    }

    std::cout << "First 50 powers of 2: ";
    generatePowersOfTwo(50);

    return 0;
}

