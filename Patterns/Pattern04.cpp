// 1
// 22
// 333
// 4444

#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
    return 0;
}