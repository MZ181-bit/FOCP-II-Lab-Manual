#include <iostream>
using namespace std;
int main() {
    int arr[5], max1, max2;
    for(int i=0;i<5;i++) cin >> arr[i];
    max1=max2=arr[0];
    for(int i=1;i<5;i++) {
        if(arr[i]>max1) {
            max2=max1;
            max1=arr[i];
        } else if(arr[i]>max2 && arr[i]!=max1) {
            max2=arr[i];
        }
    }
    cout << max1 << " " << max2;
    return 0;
}