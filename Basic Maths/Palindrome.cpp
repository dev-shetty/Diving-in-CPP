#include <bits/stdc++.h>
class Solution {
   public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long int rev = 0;
        int x_copy = x;
        while (x != 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        return rev == x_copy;
    }
};

int main() {
    Solution sol;
    int n, isPalindrome;
    std::cout << "Enter a number: ";
    std::cin >> n;
    return 0;
}