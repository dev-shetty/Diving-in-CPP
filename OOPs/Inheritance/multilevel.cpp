#include <iostream>

// Main Class
class GrandParent {
   public:
    void hello_grandparent() {
        std::cout << "Hello my Grandchild" << std::endl;
    }
};

// Class derived from Main Class
class Parent : public GrandParent {
   public:
    void hello_parent() { std::cout << "Hello my Child" << std::endl; }
};

// Class derived from the class which was derived from Main Class
class Child : public Parent {
   public:
    void hello_child() {
        std::cout << "Hello Parent and GrandParent" << std::endl;
    }
};

int main() {
    Child dev;
    dev.hello_grandparent();
    dev.hello_parent();
    dev.hello_child();
}