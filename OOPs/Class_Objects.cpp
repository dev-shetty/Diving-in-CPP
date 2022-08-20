#include <iostream>
using namespace std;

class car {
   public:
    long int cost;
    string name;
};

int main() {
    car car1, car2, car3;
    car1.cost = 900000;
    car1.name = "Mercedes";

    cout << "Name = " << car1.name << endl << "Cost = " << car1.cost << endl;
}