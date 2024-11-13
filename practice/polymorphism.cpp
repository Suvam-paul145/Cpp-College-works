#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() {  // Base class method
            cout << "This is an animal sound." << endl;
        }
};

class Dog : public Animal {
    public:
        void sound() override {  // Overriding the base class method
            cout << "Woof! Woof!" << endl;
        }
};

class Cat : public Animal {
    public:
        void sound() override {  // Overriding the base class method
            cout << "Meow! Meow!" << endl;
        }
};

int main() {
    Animal* animal1 = new Dog();  // Polymorphism: Dog object treated as an Animal
    Animal* animal2 = new Cat();  // Polymorphism: Cat object treated as an Animal

    animal1->sound();  // Calls Dog's sound method
    animal2->sound();  // Calls Cat's sound method

    delete animal1;
    delete animal2;

    return 0;
}
