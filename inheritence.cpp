
//QUESTION 9 :(Inheritance )
#include <iostream>
using namespace std;

class publication2 {
protected:
    string title;
    float price;
    int day, month, year;

public:
    void getdata() {
        cout << "Enter title and price: ";
        cin >> title >> price;
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    void putdata() {
        cout << title << " " << price << " ";
        cout << day << "/" << month << "/" << year << endl;
    }
};

class book : public publication2 {
    int pages;

public:
    void getdata() {
        publication2::getdata();
        cout << "Enter pages: ";
        cin >> pages;
    }

    void putdata() {
        publication2::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication2 {
    float time;

public:
    void getdata() {
        publication2::getdata();
        cout << "Enter playing time: ";
        cin >> time;
    }

    void putdata() {
        publication2::putdata();
        cout << "Time: " << time << endl;
    }
};

int main() {
    book b;
    tape t;

    b.getdata();
    t.getdata();

    b.putdata();
    t.putdata();

    return 0;
}
