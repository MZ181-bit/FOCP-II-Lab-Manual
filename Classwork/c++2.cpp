// hello world in c++

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    float f = 14.67;
    string name = "FOCP II";
   cout<<"Enter the value of a,f& name";
    cin>>a;
    cin>>f;
    getline(cin,name);
    cout<<"\n a ="<<a<<"\n f= "<<f<<" \n name = "<<name;
  
    return 0;
}