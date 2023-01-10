#include<bits/stdc++.h>
using namespace std;
int main() {
    set<int> s;
    int n = 10, item;
    while(n--) {
        cin >> item;
        s.insert(item);
    }
    for(auto it=s.end(); it!=s.begin(); it--) {
        cout << *(it) << " ";
    }
    cout << *(s.begin());
    return 0;
}