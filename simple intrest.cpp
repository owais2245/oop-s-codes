
#include <iostream>
using namespace std;

// Function to calculate simple interest
float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float principal, rate, time;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest: ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    cout << "Simple Interest = " << simpleInterest(principal, rate, time) << endl;

    return 0;
}
