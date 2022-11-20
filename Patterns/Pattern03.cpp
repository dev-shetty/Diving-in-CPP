// 1
// 12
// 123
// 1234

#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}