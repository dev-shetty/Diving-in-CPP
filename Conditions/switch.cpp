#include <iostream>

using namespace std;

int main() {
    int day = 5;
    switch (day) {
        case 6:
            cout << "It is Saturday";
            break;
        case 7:
            cout << "It is Sunday";
            break;
        default:
            cout << "WeekDay :(";
    }
}