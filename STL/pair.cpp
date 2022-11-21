#include <bits/stdc++.h>
using namespace std;
int main() {
    // if using namespace std; is not used
    // std::pair<int, int> p = {1, 3};
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << "\n";

    // Nesting of pair
    pair<int, pair<int, int>> k = {2, {4, 5}};
    cout << k.first << " " << k.second.first << " " << k.second.second << "\n";

    // Arrays of pair
    pair<int, int> a[] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; i++) {
        cout << a[i].first << " " << a[i].second << "\n";
    }

    return 0;
}