//Class for Bank Account with Loop Operations:

#include <iostream>
#include <string>

class BankAccount {
public:
    std::string accountHolder;
    double balance;

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cerr << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << " from the account." << std::endl;
        } else {
            std::cerr << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Account Holder: " << accountHolder << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount accounts[2];

    for (int i = 0; i < 2; ++i) {
        std::cout << "Enter details for account " << i + 1 << ":" << std::endl;
        std::cout << "Account Holder: ";
        std::cin >> accounts[i].accountHolder;
        std::cout << "Initial Balance: ";
        std::cin >> accounts[i].balance;
    }

    for (int i = 0; i < 2; ++i) {
        accounts[i].displayBalance();
        accounts[i].deposit(500.0);
        accounts[i].withdraw(200.0);
        accounts[i].displayBalance();
        std::cout << std::endl;
    }

    return 0;
}
