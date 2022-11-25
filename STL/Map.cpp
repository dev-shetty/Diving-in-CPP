#include <bits/stdc++.h>
using namespace std;
int main() {
    // Stores in key and value
    // Stores unique keys in sorted order
    map<int, int> m;
    m[1] = 2;
    m.insert({2, 4});
    m.insert({3, 6});

    for (auto it : m) {
        cout << it.first << " " << it.second << "\n";
    }

    // Fucntions - log(n);
    return 0;
}