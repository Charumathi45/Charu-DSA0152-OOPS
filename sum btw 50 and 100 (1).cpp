#include <iostream>

int main() {
    int sum = 0;

    for (int i = 50; i <= 100; ++i) {
        if (i % 7 == 0) {
            sum += i;
        }
    }

    std::cout << "The sum of integers between 50 and 100 that are divisible by 7 is: " << sum << std::endl;

    return 0;
}

