#include <iostream>

int main() {
    int total_seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> total_seconds;

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    std::cout << total_seconds << " seconds is equivalent to ";
    std::cout << hours << " hours " << minutes << " minutes " << seconds << " seconds." << std::endl;

    return 0;
}

