#include <iostream>

int main() {
    try {
        int age = 12;
        if (age >= 18) {
            std::cout << "Access Granted! You are allowed to enter";
        } else {
            throw(age);
        }
    } catch (int age) {
        std::cout << "Access Denied - You are below 18" << std::endl;
        std::cout << "Your age: " << age;
    }

    return 0;
}