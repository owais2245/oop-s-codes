// Publication  Book & Tape (Virtual Functions)
 //Concept: Inheritance + Virtual Function + Pointer Array
#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    float price;
public:
    virtual void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    virtual void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int pages;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter pages: ";
        cin >> pages;
    }
    void putdata() {
        Publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Publication {
    float time;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter playing time: ";
        cin >> time;
    }
    void putdata() {
        Publication::putdata();
        cout << "Playing Time: " << time << endl;
    }
};

int main() {
    Publication* p[2];

    p[0] = new Book();
    p[1] = new Tape();

    for (int i = 0; i < 2; i++)
        p[i]->getdata();

    cout << " Data ";
    for (int i = 0; i < 2; i++)
        p[i]->putdata();

    return 0;
}
