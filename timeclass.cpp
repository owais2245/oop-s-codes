//Question 6: Time Class
//Subtract two time values and multiply time by a float


#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Subtract two times
    Time operator-(Time t) {
        Time temp;
        int total1 = hours * 60 + minutes;
        int total2 = t.hours * 60 + t.minutes;
        int diff = total1 - total2;

        temp.hours = diff / 60;
        temp.minutes = diff % 60;
        return temp;
    }

    // Multiply time by float
    Time operator*(float x) {
        Time temp;
        int total = (hours * 60 + minutes) * x;
        temp.hours = total / 60;
        temp.minutes = total % 60;
        return temp;
    }

    void display() {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1(5, 30), t2(2, 45);

    Time t3 = t1 - t2;
    cout << "Time after subtraction: ";
    t3.display();

    Time t4 = t1 * 2.0;
    cout << "Time after multiplication: ";
    t4.display();

    return 0;
}

