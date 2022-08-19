#include <iostream>
using namespace std;

int sum(int x, int y) { return x + y; }
double sum(double x, double y) { return x + y; }

int main() {
    cout << "From int: " << sum(4, 78) << endl;
    cout << "From double: " << sum(4.2, 6.4) << endl;
    return 0;
}