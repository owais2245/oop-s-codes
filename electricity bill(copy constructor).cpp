#include <iostream>
using namespace std;

class Bill {
private:
    int units;
    float total;

public:
    // Parameterized constructor
    Bill(int u) {
        units = u;
        total = units * 5;   //5 rupees charge per unit
    }

    // Copy constructor
    Bill(const Bill &b) {
        units = b.units;
        total = b.total;
    }

    // Function for displaying bill
    void display() {
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill " << total << endl;
    }
};

int main() {
    
    Bill b1(120);   
    
    cout << "original Bill:" << endl;
    b1.display();

    // Copied object
    Bill b2(b1);   // Copy constructor
    
    cout << "\nCopied Bill:" << endl;
    b2.display();

    return 0;
}
