#include<bits/stdc++.h>
using namespace std;
int main() {
    set<string> s;
    s.insert("Deveesh");
    s.insert("Srujan");
    s.insert("Rohan");
    s.insert("Adithya");
    s.insert("Adithya");
    s.insert("Adithya");
    s.insert("Rohan");
    s.erase("Adithya");

    for(auto it=s.begin(); it!=s.end(); it++) {
        cout << *(it) << "\n";
    }
    return 0;
}