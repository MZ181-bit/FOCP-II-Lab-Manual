#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    int rollNo;

public:
    Student(string n, int a, int r) : Person(n, a) {
        rollNo = r;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s("Maaz", 19, 101);
    s.displayStudent();

    return 0;
}