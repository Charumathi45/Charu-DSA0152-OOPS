#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    
    std::cout << "The maximum of the three numbers is: " << max << std::endl;

    return 0;
}

