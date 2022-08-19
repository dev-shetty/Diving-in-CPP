#include <iostream>

using namespace std;

void hello(string name = "Deveesh") { cout << name << endl; }

void hello_multiple(string name, int age) {
    cout << "I am " << name << " and I am " << age << " years young!";
}

int main() {
    hello();
    hello("C++");

    hello_multiple("Deveesh", 19);
    return 0;
}