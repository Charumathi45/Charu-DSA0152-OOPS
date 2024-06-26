#include <iostream>
#include <string>

class Account {
protected:
    std::string accountNumber;
    double balance;

public:
    Account(std::string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance.\n";
        }
    }

    void display() const {
        std::cout << "Account Number: " << accountNumber << "\nBalance: " << balance << "\n";
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(std::string accNum, double bal) : Account(accNum, bal) {}

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance.\n";
        }
    }
};

int main() {
    SavingsAccount sa("12345", 1000.0);
    sa.deposit(500);
    sa.withdraw(200);
    sa.display();
    return 0;
}

