#include <iostream>
using namespace std;

class Account {
protected:
    int accno;
    float balance;

public:
    Account(int a, float b) {
        accno = a;
        balance = b;
    }

    void displayAccount() {
        cout << "Account Number: " << accno << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
    float interestRate;

public:
    SavingsAccount(int a, float b, float rate) : Account(a, b) {
        interestRate = rate;
    }

    void calculateInterest() {
        float interest = balance * interestRate / 100;
        cout << "Interest: " << interest << endl;
    }
};

int main() {
    SavingsAccount s(101, 5000.0, 4.5);
    s.displayAccount();
    s.calculateInterest();

    return 0;
}