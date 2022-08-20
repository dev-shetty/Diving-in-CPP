#include <iostream>

class Palindrome {
    int n;

   public:
    void input() {
        std::cout << "Enter a number: ";
        std::cin >> n;
    }
    void checker() {
        int original_n = n;
        int temp = 0;
        while (n != 0) {
            int rem = n % 10;
            temp = temp * 10 + rem;
            n = n / 10;
        }

        if (temp == original_n) {
            std::cout << "It is a Palindrome";
        } else {
            std::cout << "It is not a Palindrome";
        }
    }
};

int main() {
    Palindrome obj;
    obj.input();
    obj.checker();
}