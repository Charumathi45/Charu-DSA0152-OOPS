#include <iostream>

int main() {
    int units;
    std::cout << "Enter the number of units consumed: ";
    std::cin >> units;

    int billAmount = 0;

    if (units <= 200) {
        billAmount = 0;
    } else if (units <= 400) {
        billAmount = (units - 200) * 5;
    } else if (units <= 600) {
        billAmount = (200 * 0) + (200 * 5) + ((units - 400) * 7);
    } else if (units <= 800) {
        billAmount = (200 * 0) + (200 * 5) + (200 * 7) + ((units - 600) * 9);
    } else {
        billAmount = (200 * 0) + (200 * 5) + (200 * 7) + (200 * 9) + ((units - 800) * 11);
    }

    std::cout << "The amount of the bill is: " << billAmount << " Rs." << std::endl;

    return 0;
}

