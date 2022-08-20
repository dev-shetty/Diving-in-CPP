#include <cmath>
#include <iostream>

class Armstrong {
    int n;

   public:
    void input() {
        std::cout << "Enter a number: ";
        std::cin >> n;
    }
    int number_of_digits(int);
    void isArmstrong();
};
int Armstrong ::number_of_digits(int n) {
    int num_of_digits = 0;
    while (n > 0) {
        n = n / 10;
        num_of_digits++;
    }
    return num_of_digits;
}

void Armstrong ::isArmstrong() {
    int original = n;
    int temp = 0;
    int rem;
    int num_of_digits = original < 999 ? 3 : number_of_digits(original);
    while (n != 0) {
        rem = n % 10;
        temp = temp + pow(rem, num_of_digits);
        n = n / 10;
    }
    if (temp == original) {
        std::cout << "It is an armstrong number";
    } else {
        std::cout << "It is not an armstrong number";
    }
}

int main() {
    Armstrong obj;
    obj.input();
    obj.isArmstrong();
}