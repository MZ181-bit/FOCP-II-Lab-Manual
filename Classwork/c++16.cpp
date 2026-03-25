#include <iostream>
using namespace std;

class Candy {
    string color;
    int points;
public:
    Candy();
    Candy(string clr);
    Candy(string clr, int pts);
    void setCandy(string, int);
    void displayCandy();
};

Candy::Candy() {
    color = "Black";
    points = 0;
}

Candy::Candy(string clr) {
    color = clr;
    points = 0;
}

Candy::Candy(string clr, int pts) {
    color = clr;
    points = pts;
}

void Candy::setCandy(string c, int p) {
    color = c;
    points = p;
}

void Candy::displayCandy() {
    cout << "\nColor: " << color;
    cout << "\nPoints: " << points;
}

int main() {
    Candy c1;
    Candy c2("Red");
    Candy c3("Blue", 40);
    c1.displayCandy();
    c2.displayCandy();
    c3.displayCandy();
    return 0;
}