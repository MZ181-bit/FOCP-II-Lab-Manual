#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, result;

    cout << "Temperature Converter\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32) * 5.0 / 9.0;
        cout << temp << "°F = " << result << "°C\n";
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9.0 / 5.0) + 32;
        cout << temp << "°C = " << result << "°F\n";
    }
    else {
        cout << "Invalid choice! Please run the program again.\n";
    }

    return 0;
}