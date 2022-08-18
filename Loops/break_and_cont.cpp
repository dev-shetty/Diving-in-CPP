#include <iostream>

using namespace std;

int main() {
    // BREAK
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }  // wont print numbers after 4
        cout << i << endl;
    }
    cout << endl << endl;
    // CONTINUE
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }  // will print every number except 5
        cout << i << endl;
    }
    return 0;
}