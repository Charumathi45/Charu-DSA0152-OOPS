#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin("input.txt");
    if (!fin) {
        std::cerr << "Error opening file.\n";
        return 1;
    }

    int lineCount = 0;
    std::string line;

    while (std::getline(fin, line)) {
        lineCount++;
    }

    std::cout << "Number of lines in the file: " << lineCount << "\n";

    fin.close();

    return 0;
}

