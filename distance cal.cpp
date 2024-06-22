#include <iostream>
#include <cmath>  


double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    
    std::cout << "Enter the coordinates of the first point (x1, y1): ";
    std::cin >> x1 >> y1;

    
    std::cout << "Enter the coordinates of the second point (x2, y2): ";
    std::cin >> x2 >> y2;

    
    double distance = calculateDistance(x1, y1, x2, y2);

   
    std::cout << "The distance between the points (" << x1 << ", " << y1 << ") and ("
              << x2 << ", " << y2 << ") is " << distance << std::endl;

    return 0;
}
