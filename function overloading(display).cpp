#include <iostream>
#include <string>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(float f) {
    cout << "Float: " << f << endl;
}

void display(string s) {
    cout << "String: " << s << endl;
}
int  main()
{
    int i;
    float f;
    string s;

    cout << "Enter an integer: ";
    cin >> i;
    display(i);

    cout << "Enter a float: ";
    cin >> f;
    display(f);

    cout << "Enter a string: ";
    cin>> s;
    display(s);
	return 0;
}