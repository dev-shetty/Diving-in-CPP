#include <iostream>

using std::cout, std::cin;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 1) {
        cout << n << " is neither prime nor composite!!!";
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << n << " is not a prime number";
            isPrime = false;
            break;
        }
    }

    if (isPrime != false) {
        cout << n << " is a prime number!";
    }
}