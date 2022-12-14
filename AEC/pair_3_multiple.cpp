#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<int, int> p[5];
    for(int i=0; i<5; i++) {
        int x;
        cin >> x;
        p[i] = {x, x*3};
    }
    for(int i=0; i<5; i++)
        cout << p[i].first << ", " << p[i].second << "\n";
}