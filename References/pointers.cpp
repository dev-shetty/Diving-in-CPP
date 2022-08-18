#include <iostream>

using namespace std;

int main() {
    int number = 12;
    int* ptr = &number;

    cout << "Address of number or ptr: " << ptr << endl;
    cout << "Value of number or *ptr: " << *ptr << endl;
}