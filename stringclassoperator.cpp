//operator overloading
// Exercise 2: String class (operator +=)
#include <iostream>
#include <cstring>
using namespace std;

class Str {
    char s[50];

public:
    Str(char a[]="") {
        strcpy(s,a);
    }

    Str operator+=(Str x) {
        strcat(s,x.s);
        return *this;
    }

    void show() {
        cout<<s<<endl;
    }
};

int main() {
    Str s1("tamseela "), s2("nazir");
    Str s3;

    s3 = s1 += s2;

    s1.show();
    s3.show();
    return 0;
}
