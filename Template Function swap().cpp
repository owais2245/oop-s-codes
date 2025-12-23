//Exercise 4:Template Function swap()

#include <iostream>
using namespace std;

template <class T>
void swaps(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swaps(x, y);
    cout << x << " " << y << endl;

    float p = 1.5, q = 2.5;
    swaps(p, q);
    cout << p << " " << q << endl;

    return 0;
}