#include <iostream>

class Animal {
   public:
    void animal_sound() { std::cout << "Animals make a sound "; }
};

class Dog : public Animal {
   public:
    void animal_sound() { std::cout << "Bow! Bow!" << std::endl; }
};

class Cat : public Animal {
   public:
    void animal_sound() { std::cout << "Meow! Meow!" << std::endl; }
};

class Tiger : public Animal {
   public:
    void animal_sound() { std::cout << "Roarrrrrrrrr!!!" << std::endl; }
};

int main() {
    Dog dog;
    Cat cat;
    Tiger tiger;

    dog.animal_sound();
    cat.animal_sound();
    tiger.animal_sound();
}