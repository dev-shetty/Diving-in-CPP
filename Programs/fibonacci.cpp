#include <iostream>

int fib(int i) {
    if (i == 0) return 0;
    if (i == 1) return 1;
    return fib(i - 1) + fib(i - 2);
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Fibonacci series is: ";
    for (int i = 0; i < n; i++) {
        std::cout << fib(i) << "\t";
    }
    return 0;
}