#include <iostream>
int main() {
    int x = 10;
    int y = 3;
    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    int division = x / y;
    int modulo_division = x % y;

    std::cout << addition << "\t" << subtraction << "\t" << multiplication
              << "\t" << division << "\t" << modulo_division << std::endl;

    x = x++;  // x = 10
    std::cout << "Post increment x++ = " << x << std::endl;
    x = 10;   // reassigning x so that it will be same in both cases
    x = ++x;  // x = 11
    std::cout << "Pre increment ++x = " << x << std::endl;

    double a = 10;
    double b = 5;
    double c;

    c = (a + 10) / (3 * b);

    std::cout << c;
    return 0;
}