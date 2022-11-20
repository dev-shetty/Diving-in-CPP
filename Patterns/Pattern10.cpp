// A B C D
// A B C
// A B
// A

#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;
    for (int i = n; i > 0; i--) {
        for (char j = 65; j < (i + 65); j++) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    return 0;
}