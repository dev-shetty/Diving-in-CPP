#include <bits/stdc++.h>
class Prime {
   public:
    bool isPrime(int x) {
        if (x == 2) return true;
        if (x % 2 == 0) return false;
        for (int i = 3; i <= x / 2; i += 2) {
            if (x % i == 0) return false;
        }
        return true;  // was giving warning so had to put this
    }
};

int main() {
    Prime obj;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << obj.isPrime(n);
    return 0;
}