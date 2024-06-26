#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    int *arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }
    
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    delete[] arr;
    
    return 0;
}

