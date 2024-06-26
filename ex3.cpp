#include <iostream>

int main() {
    
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 15; ++j) {
            if (i < 4 && j < 8) {
                if (i % 2 == 0 && j % 2 == 0) {
                    std::cout << "*";
                } else if (i % 2 == 1 && j % 2 == 1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            } else {
                std::cout << "=";
            }
        }
        std::cout << "\n";
    }

   
    for (int i = 0; i < 7; ++i) {
        std::cout << "===============" << "\n";
    }

    return 0;
}

