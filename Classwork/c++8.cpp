#include<iostream>
using namespace std;
int main(){
    int netsalary, bonuses;
    cout<<"Enter the net salary: ";
    cin>>netsalary;
    bonuses = netsalary * 0.12;
    cout<<"Net Salary: "<<netsalary<<endl;
    cout<<"Bonuses: "<<bonuses<<endl;
    return 0;
}