#include <iostream>
using namespace std;

int main() {
    float radius, area;
    float pi = 3.14;   

    cout << "Enter the radius of the fountain: ";
    cin >> radius;

    area = pi * radius * radius;  

    cout << "Area of the fountain = " << area << endl;

    return 0;
}