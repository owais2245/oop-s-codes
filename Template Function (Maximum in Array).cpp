//Exercise 5: Template Function (Maximum in Array)
#include <iostream>
using namespace std;

template <class T>
T amax(T arr[], int n) {
    T max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int a[5] = {1, 5, 3, 9, 2};
    cout << "Max = " << amax(a, 5);

    return 0;
}