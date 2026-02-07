#include <iostream>
using namespace std;
int main() {
    int n, sum=0, temp, rem;
    cin >> n;
    temp=n;
    for(int i=1;i<n;i++) {
        if(n%i==0) sum+=i;
    }
    if(sum==n) cout << "Perfect" << endl;
    sum=0;
    temp=n;
    while(temp>0) {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(sum==n) cout << "Armstrong";
    return 0;
}