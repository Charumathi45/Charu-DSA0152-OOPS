#include <iostream>

int main() {
    int sum = 0;
    int a = 0, b = 1, c = 0;

    while (c <= 100) {
        c = a + b;
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
    }

    std::cout << "Sum of even terms in Fibonacci series: " << sum << std::endl;

    return 0;
}

