//operator overloading
//exercise 1:question 1:distance class operator
#include <iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    Distance(int f=0, int i=0) {
        feet = f;
        inches = i;
    }

    Distance operator-(Distance d) {
        int t1 = feet*12 + inches;
        int t2 = d.feet*12 + d.inches;
        int diff = t1 - t2;

        return Distance(diff/12, diff%12);
    }

    void show() {
        cout << feet << " feet " << inches << " inches\n";
    }
};

int main() {
    Distance d1(10,6), d2(5,4);
    Distance d3 = d1 - d2;
    d3.show();
    return 0;
}
