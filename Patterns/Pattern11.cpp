// A
// B B
// C C C
// D D D D

#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (char i = 65; i < (n + 65); i++) {
        for (int j = 65; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }

    return 0;
}