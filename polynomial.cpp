#include <iostream>
#include <cmath>
#include <iomanip>


double f(double x) {
    return x * x * x - 2 * x - 5;  
}


double f_prime(double x) {
    return 3 * x * x - 2;  
}

int main() {
    double x0 = 2.0;  
    double tolerance = 1e-7;
    int max_iterations = 1000;
    
    std::cout << "Newton-Raphson Method to Find Root of Polynomial\n";
    std::cout << "Initial guess: " << x0 << "\n";
    std::cout << "Tolerance: " << tolerance << "\n";
    
    int iterations = 0;
    double x = x0;
    while (iterations < max_iterations) {
        double fx = f(x);
        double fpx = f_prime(x);
        
        if (fabs(fpx) < 1e-12) {
            std::cout << "Derivative is too small.\n";
            break;
        }
        
        double x_next = x - fx / fpx;
        
        if (fabs(x_next - x) < tolerance) {
            std::cout << "Root found: " << x_next << "\n";
            std::cout << "Iterations: " << iterations << "\n";
            return 0;
        }
        
        x = x_next;
        iterations++;
    }
    
    std::cout << "Maximum iterations reached without convergence.\n";
    return 0;
}
