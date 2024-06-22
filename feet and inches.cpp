#include <iostream>
#include <iomanip>

int main() {
    const double cm_per_inch = 2.54;
    const int inches_per_foot = 12;
    
    double centimeters;
    std::cout << "Enter the length in centimeters: ";
    std::cin >> centimeters;
    
    double total_inches = centimeters / cm_per_inch;
    
    int feet = static_cast<int>(total_inches) / inches_per_foot;
    double inches = total_inches - (feet * inches_per_foot);
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << centimeters << " centimeters is " 
              << feet << " feet " 
              << inches << " inches." << std::endl;
    
    return 0;
}

