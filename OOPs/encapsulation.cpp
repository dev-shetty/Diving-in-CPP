#include <iostream>

class car {
    int car_cost;

   public:
    // Setter function
    void set_car_cost(int cost) { car_cost = cost; }
    // Getter function
    int get_car_cost() { return car_cost; }
};

int main() {
    car car1;
    std::cout << car1.get_car_cost()
              << std::endl;    // gets the current value of car_cost ie. 0
    car1.set_car_cost(50000);  // sets the value of car_cost as 50000
    std::cout << car1.get_car_cost()
              << std::endl;  // gets the current value of car_cost ie. 50000
    return 0;
}
