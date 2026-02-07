#include <iostream>
using namespace std;
int main() {
    float temp;
    int choice;
    cin >> choice;
    if(choice==1) {
        cin >> temp;
        cout << (temp - 32) * 5 / 9;
    } else if(choice==2) {
        cin >> temp;
        cout << (temp * 9 / 5) + 32;
    }
    return 0;
}