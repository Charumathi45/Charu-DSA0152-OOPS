#include <iostream>

class Point {
private:
    int x, y;

public:
    
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }


    void display() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    Point p3 = p1 + p2;

    std::cout << "p1: ";
    p1.display();

    std::cout << "p2: ";
    p2.display();

    std::cout << "p1 + p2: ";
    p3.display();

    return 0;
}

