// 1234
// 123
// 12
// 1

#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}