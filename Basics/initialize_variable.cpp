#include <iostream>

using namespace std;

int main() {
    double price = 99.99;
    float interest_rate = 3.67F;
    long file_size = 90000L;
    char letter = 'D';
    bool is_valid = false;

    auto A = 25;      // integer
    auto B = 45.36;   // double
    auto C = 98.23F;  // float
    auto D = false;   // bool
    auto E = 65412L;  // long

    // Brace initialization
    int number{};  // 0
    int number2{2};
    // if value is not integer it shows error which can reduce bugs

    unsigned int num = 12;
    // Takes only positive value
}