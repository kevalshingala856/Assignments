#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited : " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdraw : " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Current Balance : " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(1000);
    myAccount.withdraw(500);
    myAccount.displayBalance();

    return 0;
}
