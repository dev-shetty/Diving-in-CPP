#include <iostream>

using namespace std;

int main() {
    struct {
        int number;
        string name;
    } child1, child2;

    child1.number = 12;
    child1.name = "Dev";

    child2.number = 45;
    child2.name = "Anonymous";

    cout << child1.number << endl << child1.name << endl;
    cout << child2.number << endl << child2.name << endl;

    return 0;
}