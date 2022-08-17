#include <iostream>

using namespace std;

int main() {
    int time = 15;
    string result = (time < 12) ? "Good Morning" : "Good Afternoon";
    cout << result << endl;

    int a = 10;
    int b = 20;
    string greater_number = (a > b) ? "a is greater" : "b is greater";
    cout << greater_number;

    return 0;
}
