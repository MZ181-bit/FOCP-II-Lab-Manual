#include <iostream>
using namespace std;

class A {
    int a1;
    int a2;
        
public:
    A() {
        a1 = 0;
        a2 = 0;
    }

    A(int a1, int a2) {
        this->a1 = a1;
        this->a2 = a2;
    }

    void display() {
        cout << "a1: " << a1 << ", a2: " << a2 << endl;
    }
};

int main() {
    A obj1;
    A obj2(10, 20); 

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    return 0;
}