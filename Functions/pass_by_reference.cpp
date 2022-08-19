#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// OR

void another_swap(int* p, int* q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before exchanging a = " << a << " b = " << b << endl;

    swap(a, b);

    cout << "After exchanging a = " << a << " b = " << b << endl;
    cout << endl << endl;

    // OR

    int x = 100;
    int y = 50;

    cout << "Before swapping x = " << x << " y = " << y << endl;
    another_swap(&x, &y);
    cout << "After swapping x = " << x << " y = " << y << endl;
    return 0;
}