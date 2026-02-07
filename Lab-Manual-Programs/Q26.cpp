#include <iostream>
using namespace std;
int main() {
    int marks[5], total=0;
    for(int i=0;i<5;i++) {
        cin >> marks[i];
        total+=marks[i];
    }
    float percent = total/5.0;
    cout << total << " " << percent;
    return 0;
}