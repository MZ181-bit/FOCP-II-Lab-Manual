#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int i=0;
    while(s[i]==' ') i++;
    string t="";
    int space=0;
    for(;i<s.length();i++) {
        if(s[i]==' ') {
            if(space==0) {
                t+=' ';
                space=1;
            }
        } else {
            t+=s[i];
            space=0;
        }
    }
    if(t[0]>='a' && t[0]<='z') t[0]=t[0]-32;
    for(int j=1;j<t.length();j++) {
        if(t[j]>='A' && t[j]<='Z') t[j]=t[j]+32;
    }
    int words=0,digits=0,special=0;
    for(int j=0;j<t.length();j++) {
        if(t[j]==' ') words++;
        else if(t[j]>='0' && t[j]<='9') digits++;
        else if((t[j]>='A'&&t[j]<='Z')||(t[j]>='a'&&t[j]<='z')) {}
        else special++;
    }
    words++;
    cout << t << endl;
    cout << words << endl;
    cout << digits << endl;
    cout << special << endl;
    int flag=0;
    for(int j=0;j<t.length();j++) {
        if(!((t[j]>='A'&&t[j]<='Z')||(t[j]>='a'&&t[j]<='z')||(t[j]>='0'&&t[j]<='9')||t[j]==' ')) {
            flag=1;
            break;
        }
    }
    if(flag==0) cout << "Valid";
    else cout << "Invalid";
    return 0;
}