#include <iostream>

class car {
   public:
    long int car_cost;

   private:
    int car_number;

   protected:
    int car_insaurance;
};

int main() {
    car car1;
    car1.car_cost = 9000000;
    // car1.car_number;         // cannot be accessed
    // car1.car_insaurance;     // cannot be accessed
    std::cout << car1.car_cost;
}