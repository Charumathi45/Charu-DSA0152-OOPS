#include <iostream>

int main() {
    int total_seconds;
    std::cout << "Enter the number of seconds: ";
    std::cin >> total_seconds;
    
    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;
    
    std::cout << total_seconds << " seconds is equivalent to "
              << hours << " hours "
              << minutes << " minutes "
              << seconds << " seconds." << std::endl;
    
    return 0;
}

