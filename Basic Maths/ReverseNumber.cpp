#include <bits/stdc++.h>
class Solution {
   public:
    int reverse(int x) {
        long int rev = 0, rem;
        while (x != 0) {
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }
        return (rev > INT_MAX || rev < INT_MIN ? 0 : rev);
    }
};

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Reverse of number is: " << sol.reverse(n);
    return 0;
}