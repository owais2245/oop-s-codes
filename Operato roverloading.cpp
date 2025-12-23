//Array Class using [] Operator
//Concept: Operator Overloading ([])

#include <iostream>
using namespace std;

class Array {
    int a[10];
public:
    int& operator[](int i) {
        return a[i];
    }
};

int main() {
    Array arr;

    for (int i = 0; i < 5; i++)
        arr[i] = i * i;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}