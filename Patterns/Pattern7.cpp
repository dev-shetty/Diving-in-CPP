// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <bits/stdc++.h>
int main() {
    int n, counter;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                counter = i % 2 == 0 ? 0 : 1;
            } else {
                counter = i % 2 == 0 ? 1 : 0;
            }

            // counter = j % 2 != 0 ? (i % 2 == 0 ? 0 : 1) : (i % 2 == 0 ? 1 :
            // 0);
            std::cout << counter << " ";
        }
        std::cout << "\n";
    }
    return 0;
}