#include <iostream>
#include <fstream>
#include <string>

struct Student {
    std::string name;
    int age;
};

int main() {
   
    std::ofstream fout("students.bin", std::ios::binary);
    if (!fout) {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    Student s1 = {"Alice", 20};
    Student s2 = {"Bob", 21};

    fout.write(reinterpret_cast<char*>(&s1), sizeof(Student));
    fout.write(reinterpret_cast<char*>(&s2), sizeof(Student));

    fout.close();

  
    std::ifstream fin("students.bin", std::ios::binary);
    if (!fin) {
        std::cerr << "Error opening file for reading.\n";
        return 1;
    }

    Student readS1, readS2;

    fin.read(reinterpret_cast<char*>(&readS1), sizeof(Student));
    fin.read(reinterpret_cast<char*>(&readS2), sizeof(Student));

    std::cout << "Student 1: " << readS1.name << " " << readS1.age << "\n";
    std::cout << "Student 2: " << readS2.name << " " << readS2.age << "\n";

    fin.close();

    return 0;
}

