#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter three scores: ";
    cin >> a >> b >> c;
    int average = (a + b + c) / 3;
    cout << "winner is: " << average << endl;
    return 0;


}