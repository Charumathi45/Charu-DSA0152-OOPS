#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin("input.txt");
    if (!fin) {
        std::cerr << "Error opening input file.\n";
        return 1;
    }

    std::ofstream fout("output.txt");
    if (!fout) {
        std::cerr << "Error opening output file.\n";
        return 1;
    }

    char ch;
    while (fin.get(ch)) {
        fout.put(ch);
    }

    std::cout << "File copied successfully.\n";

    fin.close();
    fout.close();

    return 0;
}

