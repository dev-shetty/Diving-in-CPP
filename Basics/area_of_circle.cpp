#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double radius;
    const double pi = 3.141;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = pi * pow(radius, 2);
    cout << "Area of the circle is: " << area;
}