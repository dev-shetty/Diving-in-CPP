#include <bits/stdc++.h>
using namespace std;
int main() {
    // Stores everything in sorted order
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);  // will store all 1's

    ms.erase(1);           // erases all the 2's
    ms.erase(ms.find(1));  // will erase only one 1
    return 0;
}