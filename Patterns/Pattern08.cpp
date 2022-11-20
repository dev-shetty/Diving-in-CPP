// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <bits/stdc++.h>
int main() {
    int n, counter = 1;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++, counter++) {
            std::cout << counter << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}