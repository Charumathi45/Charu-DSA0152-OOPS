#include <iostream>

int main() {
    int num;
    std::cout << "Enter a 5-digit number: ";
    std::cin >> num;

    int reversedNum = 0;
    for (int i = 0; i < 5; ++i) {
        reversedNum = reversedNum * 10 + (num % 10);
        num /= 10;
    }

    std::cout << "Reversed number: " << reversedNum << std::endl;

    return 0;
}

