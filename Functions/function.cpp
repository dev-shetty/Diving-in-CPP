#include <iostream>

using namespace std;

void display() { cout << "Hello World from inside a function." << endl; }

void display_correct();

int main() {
    display();
    display();
    // display_error();
    display_correct();
    return 0;
}

// void display_error() {
//     cout << "I wont be exceuted since i am not declared above";
// }

void display_correct() {
    cout << "I will be executed since i was declared above";
}
