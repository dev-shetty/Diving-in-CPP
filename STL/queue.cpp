#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> q;
    q.push(5);
    q.emplace(12);
    q.push(2);
    q.pop();
    q.back() += 12;

    cout << q.front() << "\n";
    cout << q.back() << "\n";
    return 0;
}