#include <bits/stdc++.h>
class Maths {
   public:
    int GCD(int x, int y) {
        int max = x > y ? x : y;
        int gcd;
        for (int i = 1; i <= max / 2; i++) {
            if (x % i == 0 && y % i == 0) gcd = i;
        }
        return gcd;
    }
    int LCM(int x, int y) {
        int min = x < y ? x : y;
        for (int i = min; i <= (x * y); i += min) {
            if (i % x == 0 && i % y == 0) return i;
        }
        return 0;  // was giving warning so had to put this
    }
};

int main() {
    Maths math;
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD is: " << math.GCD(a, b) << "\n";
    std::cout << "LCM is: " << math.LCM(a, b);
    return 0;
}