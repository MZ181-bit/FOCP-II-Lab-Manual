#include <iostream>
using namespace std;
int main() {
    int itemno, qty;
    float price, amount, discount;
    cin >> itemno >> qty >> price;
    amount = qty * price;
    discount = amount * 0.2;
    cout << amount - discount;
    return 0;
}