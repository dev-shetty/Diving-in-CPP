#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, int>> p = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    vector<pair<int, int>>::iterator it = p.begin();
    for(it = p.begin(); it != p.end(); it++) {
        // cout << "{"<< (*it).first <<", " << (*it).second << "}" << "\n";
        // OR can be written using ->

        cout << "{" << it->first << ", " << it->second << "}" << "\n";
    }   

    return 0;
}