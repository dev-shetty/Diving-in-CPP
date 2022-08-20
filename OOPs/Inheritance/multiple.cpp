#include <iostream>

// Parent class
class Father {
   public:
    void hello_father() { std::cout << "Hello from Father" << std::endl; }
};

// Another Parent Class
class Mother {
   public:
    void hello_mother() { std::cout << "Hello from Mother" << std::endl; }
};

// Child Class of both Parent Class
class Child : public Father, public Mother {
   public:
    void hello_child() { std::cout << "Hello Father and Mother" << std::endl; }
};

int main() {
    Child dev;
    dev.hello_father();
    dev.hello_mother();
    dev.hello_child();
}