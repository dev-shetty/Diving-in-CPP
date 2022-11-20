#include <bits/stdc++.h>
class Armstrong {
   public:
    bool isArmstrongNumber(int x) {
        int count, rem;
        long long armstrong = 0;
        int x_copy = x;
        while (x_copy != 0) {
            x_copy /= 10;
            count++;
        }
        x_copy = x;
        while (x_copy != 0) {
            rem = x_copy % 10;
            armstrong += pow(rem, count);
            x_copy /= 10;
        }
        return armstrong == x;
    }
};

int main() {
    Armstrong arm;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << arm.isArmstrongNumber(n);
    return 0;
}