#include <bits/stdc++.h>
using namespace std;
int main() {
    // Stores everything in sorted order and unique values
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);  // will not stored 2 again
    s.emplace(4);
    s.insert(3);

    // All operatiosn - log(n)
    return 0;
}