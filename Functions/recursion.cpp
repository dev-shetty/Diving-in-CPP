#include <iostream>
using namespace std;

int fact(int x) {
    if (x > 1) {
        return x * fact(x - 1);
    }
    return 1;
}

int main() {
    int a = 5;
    cout << "Factorial of 5 is: " << fact(a);
    return 0;
}