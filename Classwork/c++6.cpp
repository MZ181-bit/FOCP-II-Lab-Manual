#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    double unitPrice, amount, discount, finalAmount;
    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    amount = quantity * unitPrice;
    discount = amount * 0.20;

    finalAmount = amount - discount;

    
    cout << "\n--- Bill Details ---\n";
    cout << "Item Number: " << itemNo << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Unit Price: " << unitPrice << endl;
    cout << "Total Amount (before discount): " << amount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Amount (after discount): " << finalAmount << endl;

    return 0;
}