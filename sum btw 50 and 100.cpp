#include<iostream>
using namespace std; 

class butterflyPattern {
	
public:
	butterflyPattern(int size) : n(size) {
	}
	void printPattern(){
		for (int i=1; i <= n; i++) printLine(i);
		for (int i=n; i >= 1; i--) printLine(i);
	}
	private:
		int n;
		void printLine(int i){
			printStars(i);
			printSpaces(2*(n-i));
			printStars(i);
			cout << endl;
		}
		void printStars(int count) {
        for (int j = 0; j < count; j++) cout << "*";
    }

    void printSpaces(int count) {
        for (int j = 0; j < count; j++) cout << " ";
    }
};

int main() {
    int size;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> size;

    butterflyPattern bp(size);
    bp.printPattern();

    return 0;
}


