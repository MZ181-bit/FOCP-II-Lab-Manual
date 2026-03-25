#include <iostream>
using namespace std;

class Account {
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber 
             << ", Balance: " << balance << endl;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public Account {
    double interestRate;

public:
    SavingsAccount(int accNo, double bal, double rate) 
        : Account(accNo, bal) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = getBalance() * interestRate / 100;
        cout << "Interest earned: " << interest << endl;
    }
};

int main() {
    Account acc1(1001, 5000);
    SavingsAccount sav1(2001, 10000, 5.0);

    cout << "Account Details:" << endl;
    acc1.displayAccount();

    cout << "\nSavings Account Details:" << endl;
    sav1.displayAccount();
    sav1.calculateInterest();

    return 0;
}