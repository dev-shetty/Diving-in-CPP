// * * * *
// *     *
// *     *
// * * * *

#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == (n - 1)) {
                std::cout << "* ";
            } else if (j == 0 || j == (n - 1)) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}