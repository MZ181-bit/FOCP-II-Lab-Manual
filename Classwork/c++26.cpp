#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float salary;

public:
    Employee(string n, float s) {
        name = n;
        salary = s;
    }

    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee {
public:
    Developer(string n, float s) : Employee(n, s) {}

    void displayRole() {
        displayEmployee();
        cout << "Role: Developer" << endl;
    }
};

class Designer : public Employee {
public:
    Designer(string n, float s) : Employee(n, s) {}

    void displayRole() {
        displayEmployee();
        cout << "Role: Designer" << endl;
    }
};

int main() {
    Developer d("Alice", 60000);
    d.displayRole();

    cout << endl;

    Designer des("Bob", 50000);
    des.displayRole();

    return 0;
}