#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int l = s.length();
    int flag=0;
    for(int i=0;i<l/2;i++) {
        if(s[i]!=s[l-1-i]) {
            flag=1;
            break;
        }
    }
    if(flag==0) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}