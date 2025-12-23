
//QUESTION 8: bMoney class
//Money arithmetic using operator overloading
#include <iostream>
using namespace std;

class bMoney {
    double amt;

public:
    bMoney(double x=0) {
        amt = x;
    }

    bMoney operator+(bMoney m) {
        return bMoney(amt + m.amt);
    }

    bMoney operator-(bMoney m) {
        return bMoney(amt - m.amt);
    }

    bMoney operator*(double x) {
        return bMoney(amt * x);
    }

    bMoney operator/(double x) {
        return bMoney(amt / x);
    }

    double operator/(bMoney m) {
        return amt / m.amt;
    }

    void show() {
        cout<<"?"<<amt<<endl;
    }
};

int main() {
    bMoney m1(500), m2(200);

    (m1+m2).show();
    (m1-m2).show();
    (m1*3).show();
    (m1/2).show();

    cout << m1/m2 << endl;

    return 0;
}
