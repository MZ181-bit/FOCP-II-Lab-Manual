#include <iostream>
using namespace std;
void welcome();
void welcome(string name);

int main() {
    welcome();
    welcome("section");
    return 0;
}

void welcome() {
    cout << "\n welcome agent";
}

void welcome(string name) {
    cout << "\n welcome agent " << name;
}