#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<string, string> p[4];
    p[0] = {"s1", "Math"};
    p[1] = {"s2", "DLDCO"};
    p[2] = {"s3", "OOP"};
    p[3] = {"s4", "DS"};

    swap(p[1], p[2]);

    for(int i=0; i<4; i++)
        cout << p[i].first << ", " << p[i].second << "\n";

}