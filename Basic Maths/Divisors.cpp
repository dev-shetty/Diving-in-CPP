#include <bits/stdc++.h>
class Divisor {
   public:
    void allDivisor(int x) {
        for (int i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
                std::cout << i << " " << x / i << " ";
            }
        }
    }
};
int main() {
    Divisor div;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "All divisors are: ";
    div.allDivisor(n);
    return 0;
}