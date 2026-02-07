#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int flag=0;
    for(int i=0;i<s.length();i++) {
        if(!( (s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z') || (s[i]>='0'&&s[i]<='9') )) {
            flag=1;
            break;
        }
    }
    if(flag==0) cout << "Valid";
    else cout << "Invalid";
    return 0;
}