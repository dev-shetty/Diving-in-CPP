#include <bits/stdc++.h>
using namespace std;
int main() {
    // if not using namespace std;
    // std::vector<int> v;

    // Vector is basically dynamic array
    // Creating empty container
    vector<int> v;

    // Adds 1 to container
    v.push_back(1);
    // Similar to push_back...it dynamically increases the size and adds 2....
    // Faster than push_back
    v.emplace_back(2);

    cout << v[0];

    // Vector of pair
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);  // Curly braces not required

    // vector<int> v(5, 100) => {100, 100, 100, 100, 100}
    // 5 is the size

    // vector<int> v(5) <-- size of 5 with either 0 or garbage value

    // v2 is copy of v
    vector<int> v2(v);

    return 0;
}