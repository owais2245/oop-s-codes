//operator overloading
//Exercise 5: Time class (++ and --)
#include <iostream>
using namespace std;

class Time {
    int min;

public:
    Time(int m=0) {
        min = m;
    }

    Time operator++() {      // prefix
        ++min;
        return *this;
    }

    Time operator++(int) {   // postfix
        Time t=*this;
        min++;
        return t;
    }

    Time operator--() {
        --min;
        return *this;
    }

    void show() {
        cout<<min<<" minutes\n";
    }
};

int main() {
    Time t(10);

    ++t;
    t.show();

    t++;
    t.show();

    --t;
    t.show();

    return 0;
}