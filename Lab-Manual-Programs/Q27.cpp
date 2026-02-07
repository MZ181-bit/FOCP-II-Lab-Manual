#include <iostream>
using namespace std;
int main() {
    float prices[10], max;
    for(int i=0;i<10;i++) cin >> prices[i];
    max=prices[0];
    for(int i=1;i<10;i++) {
        if(prices[i]>max) max=prices[i];
    }
    cout << max;
    return 0;
}