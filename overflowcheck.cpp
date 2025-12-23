//operator overloading
//Exercise 4: Int class (overflow check)

#include <iostream>
using namespace std;

class Int {
    int x;

public:
    Int(int a=0) {
        x=a;
    }

    Int operator+(Int i) {
        long double r = (long double)x + i.x;
        if(r > 2147483647 || r < -2147483648) {
            cout<<"Overflow\n";
            exit(0);
        }
        return Int((int)r);
    }

    void show() {
        cout<<x<<endl;
    }
};

int main() {
    Int a(2000000000), b(2000000000);
    Int c = a + b;
    c.show();
    return 0;
}
