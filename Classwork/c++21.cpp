#include <iostream>
using namespace std;

class Account {
protected:
    int accno;
    float balance;

public:
    Account() {
        cout << "Default Constructor of Account" << endl;
        accno = 0;
        balance = 0;
    }

    Account(int a, float b) {
        cout << "Parameterized Constructor of Account" << endl;
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
    SavingsAccount() {
        cout << "Default Constructor of SavingsAccount" << endl;
        interestRate = 1.0;
    }

    SavingsAccount(int a, float b, float rate) : Account(a, b) {
        cout << "Parameterized Constructor of SavingsAccount" << endl;
        interestRate = rate;
    }

    void displaySavingsAccount() {
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount s1;
    s1.displaySavingsAccount();

    SavingsAccount s2(101, 5000.0, 3.5);
    s2.displaySavingsAccount();

    return 0;
}