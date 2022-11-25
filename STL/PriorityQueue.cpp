#include <bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> pq;
    // In this the element with highest value stays at the top or Max Heap
    pq.push(21);
    pq.push(12);
    pq.emplace(35);

    // push - log(n)
    // top - O(1)
    // pop - log(n)

    pq.top();
    pq.pop();  // maximum element gets popped

    // Minimum priority queue or Min Heap
    priority_queue<int, vector<int>, greater<int>> mq;
    // int <- datatype, vector <- sequence, greater <- compare <--- parameters
    pq.push(5);
    pq.emplace(10);
    pq.emplace(8);

    pq.pop();  // minimum element gets popped;

    return 0;
}