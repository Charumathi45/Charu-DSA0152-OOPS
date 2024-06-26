#include <iostream>

class MyClass {
private:
    int data;

public:
   
    MyClass() : data(0) {}

   
    MyClass(int d) : data(d) {}

   
    ~MyClass() {
        std::cout << "Destructor called with data: " << data << "\n";
    }
};

int main() {
    int size;
    std::cout << "Enter the number of objects to create: ";
    std::cin >> size;
    
    
    MyClass *objects = new MyClass[size];
    
   
    delete[] objects;
    
    return 0;
}

