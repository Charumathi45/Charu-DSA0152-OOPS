#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<double> numbers(n);
    std::cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());

    double median;
    if (n % 2 == 0) {
        median = (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
    } else {
        median = numbers[n/2];
    }

    std::cout << "Median: " << median << std::endl;

    return 0;
}

