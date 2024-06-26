#include <iostream>
#include <vector>
#include <string>

class Room {
private:
    int roomNumber;
    bool isBooked;

public:
    Room(int rn) : roomNumber(rn), isBooked(false) {}

    void bookRoom() {
        if (!isBooked) {
            isBooked = true;
            std::cout << "Room booked.\n";
        } else {
            std::cout << "Room is already booked.\n";
        }
    }

    void cancelBooking() {
        if (isBooked) {
            isBooked = false;
            std::cout << "Booking cancelled.\n";
        } else {
            std::cout << "Room was not booked.\n";
        }
    }

    void display() const {
        std::cout << "Room Number: " << roomNumber << "\nBooked: " << (isBooked ? "Yes" : "No") << "\n";
    }
};

int main() {
    Room r(101);
    r.display();
    r.bookRoom();
    r.display();
    r.cancelBooking();
    r.display();
    return 0;
}

