#include <iostream>
using namespace std;

int sum(int, int);

int main() {
    cout << sum(12, 45);
    return 0;
}

int sum(int x, int y) { return x + y; }
