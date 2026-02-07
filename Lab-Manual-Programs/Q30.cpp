#include <iostream>
using namespace std;
int main() {
    float sal[10], total=0;
    for(int i=0;i<10;i++) {
        cin >> sal[i];
        total+=sal[i];
    }
    cout << total << " " << total/10;
    return 0;
}