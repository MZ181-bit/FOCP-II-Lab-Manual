#include <iostream>
using namespace std;
int main() {
    int arr[5], sumeven=0, sumodd=0;
    for(int i=0;i<5;i++) {
        cin >> arr[i];
        if(arr[i]%2==0) sumeven+=arr[i];
        else sumodd+=arr[i];
    }
    cout << sumeven << " " << sumodd;
    return 0;
}