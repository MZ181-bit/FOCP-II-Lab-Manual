#include <iostream>
using namespace std;
int main() {
    int n, num, max;
    cin >> n;
    cin >> max;
    for(int i=1;i<n;i++) {
        cin >> num;
        if(num>max) max=num;
    }
    cout << max;
    return 0;
}