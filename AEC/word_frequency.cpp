#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, int> m;
    int n;
    cout << "Enter no.";
    cin >> n;
    for(int i=0; i<5; i++) {
        string s;
        cin >> s;
        m[s] = m[s]+1;
    }
    for(auto it=m.begin(); it!=m.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}