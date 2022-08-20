#include <iostream>

long double fact(int n) {
    if (n > 0) {
        return n * fact(n - 1);
    }
    return 1;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    std::cout << "Factorial is " << n << "! = " << fact(n);
    return 0;
}