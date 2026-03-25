#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    Academic() {
        cout << "Default Constructor of Academic" << endl;
        marks = 0;
    }

    Academic(int m) {
        cout << "Parameterized Constructor of Academic" << endl;
        marks = m;
    }

    void displayAcademic() {
        cout << "Academic Marks: " << marks << endl;
    }
};

class Sports {
protected:
    int score;

public:
    Sports() {
        cout << "Default Constructor of Sports" << endl;
        score = 0;
    }

    Sports(int s) {
        cout << "Parameterized Constructor of Sports" << endl;
        score = s;
    }

    void displaySports() {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Academic, public Sports {
public:
    Result() {
        cout << "Default Constructor of Result" << endl;
    }

    Result(int m, int s) : Academic(m), Sports(s) {
        cout << "Parameterized Constructor of Result" << endl;
    }

    void displayResult() {
        displayAcademic();
        displaySports();
    }
};

int main() {
    Result r1;
    r1.displayResult();

    cout << endl;

    Result r2(85, 9);
    r2.displayResult();

    return 0;
}