#include <iostream>

class Car {
   protected:
    int car_inurance;
};

class Audi : public Car {
   public:
    int insurance_due;
    void set_car_insurance(int cost) { car_inurance = cost; }
    int get_car_insurance() { return car_inurance; }
};

int main() {
    Audi my_car;
    my_car.set_car_insurance(10000);
    my_car.insurance_due = 1000;

    std::cout << "Insurance: " << my_car.get_car_insurance() << std::endl;
    std::cout << "Due is : " << my_car.insurance_due << std::endl;
}