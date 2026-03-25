#include <iostream>
using namespace std;
class person
{string name;int age;
public:

person(string n,int a)

{name=n;age=a;}

void display()

{cout<<"Name: "<<name<<"\nAge: "<<age<<endl;}
};

int main()

{person p1("Alice",30);person p2("Bob",25); p1.display();p2.display();return 0;}
