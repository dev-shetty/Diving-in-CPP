#include <bits/stdc++.h>
class CountPerfectDivisor {
   public:
    int numberOfDivisor(int x) {
        int count = 0, rem;
        int x_copy = x;
        while (x != 0) {
            rem = x % 10;
            count = rem != 0 && x_copy % rem == 0 ? count + 1 : count;
            x /= 10;
        }
        return count;
    }
};

int main() {
    CountPerfectDivisor obj;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Number of digits which divides the number is: "
              << obj.numberOfDivisor(n);
    return 0;
}