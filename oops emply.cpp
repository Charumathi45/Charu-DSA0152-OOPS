#include <iostream>
#include <vector>
#include <string>

class Employee {
private:
    std::string name;
    int id;
    double salary;

public:
    Employee(std::string n, int i, double s) : name(n), id(i), salary(s) {}

    void display() const {
        std::cout << "Employee ID: " << id << "\nName: " << name << "\nSalary: " << salary << "\n";
    }
};

int main() {
    Employee e("Alice Smith", 1, 50000);
    e.display();
    return 0;
}

