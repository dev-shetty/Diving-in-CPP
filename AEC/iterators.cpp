#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4};
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++) {
        cout << *(it) << "\n";
    }

    cout << "\n";

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << "\n";
    }

    cout << "\n";

    // Here the value is getting copied
    for(auto it : v) {
        cout << it << "\n";
    }

    return 0;
}