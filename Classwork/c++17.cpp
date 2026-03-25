#include <iostream>
using namespace std;

class Candy {
    string color;
    int points;
public:
    Candy(string c, string clr) {
        color = c;
        points = 0;
    }
    Candy(string c, int pts) {
        color = c;
        points = pts;
    }
    void setCandy(string c, int p) {
        color = c;
        points = p;
    }
    void displayCandy() {
        cout << "\nColor: " << color;
        cout << "\nPoints: " << points;
    }
};

int main() {
    Candy c1("Red", "unused");
    Candy c2("Blue", 40);
    c1.displayCandy();
    c2.displayCandy();
    return 0;
}
   