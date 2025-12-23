//function overloading(area)
#include <iostream>
#include <cmath>
using namespace std;

float area(float r) {
    return 3.14f * r * r;
}

float area(float l, float b) {
    return l * b;
}

float area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
	float r,l,b;
	double base,height;
	  cout << "Enter radius: ";
        cin >> r;
    cout << "Area of circle: " << area(r) << endl;//finding area of circle
    
     cout << "Enter length and breadth: ";
        cin >> l >> b;
    cout << "Area of rectangle: " << area(l,b) << endl;//finding area of rectangle
    
      cout << "Enter base and height: ";
        cin >> base >> height;
    
    cout << "Area of triangle: " << area(base,height)<< endl;//finding area of triangle
    return 0;
}

