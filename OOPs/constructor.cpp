#include <iostream>
using namespace std;

class car {
   public:
    car() { cout << "This is my car" << endl; }
    car(string name, long int cost, int year) {
        cout << "Car name: " << name << endl
             << "Car cost: " << cost << endl
             << "Car year: " << year << endl;
    }
};

int main() {
    car car1;

    car car_audi("Audi", 1200000, 2022);

    return 0;
}