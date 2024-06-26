#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of different numbers (n): ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " different numbers between 0 and 100:\n";
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];

        while (numbers[i] < 0 || numbers[i] > 100) {
            std::cout << "Number must be between 0 and 100. Enter again: ";
            std::cin >> numbers[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }

    int inputInt;
    std::cout << "Enter an integer: ";
    std::cin >> inputInt;

    if (sum == inputInt) {
        std::cout << "Sum of entered numbers equals " << inputInt << "\n";
    } else {
        std::cout << "Sum of entered numbers does not equal " << inputInt << "\n";
    }

    return 0;
}

