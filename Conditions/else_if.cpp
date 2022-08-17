#include <iostream>

using namespace std;

int main() {
    int time = 20;
    if (time < 12) {
        cout << "Good Morning";
    } else if (time > 12 && time < 18) {
        cout << "Good Afternoon";
    } else {
        cout << "Good Evening";
    }
    return 0;
}