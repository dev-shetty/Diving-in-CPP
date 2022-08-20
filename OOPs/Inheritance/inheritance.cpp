#include <iostream>

// Parent Class
class Vehicle {
   public:
    std::string brand = "Ford";
    void cost() { std::cout << "9000000" << std::endl; }
};

// Children Class
class Car : public Vehicle {
   public:
    std::string model = "Mustang";
};

int main() {
    Car new_vehicle;
    new_vehicle.cost();

    std::cout << new_vehicle.brand << "  " << new_vehicle.model;
    return 0;
}