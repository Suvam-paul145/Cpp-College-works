
// single inheritance
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    Dog dog;
    dog.eat();  // Inherited from Animal
    dog.bark(); // Own method
    return 0;
}

// multiple inheritance
#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Bird
{
public:
    void fly()
    {
        cout << "Flying..." << endl;
    }
};

class Bat : public Animal, public Bird
{
public:
    void sound()
    {
        cout << "Screeching..." << endl;
    }
};

int main()
{
    Bat bat;
    bat.eat();   // From Animal
    bat.fly();   // From Bird
    bat.sound(); // Own method
    return 0;
}

// multilevel inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Mammal : public Animal
{
public:
    void walk()
    {
        cout << "Walking..." << endl;
    }
};

class Human : public Mammal
{
public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

int main()
{
    Human human;
    human.eat();   // From Animal
    human.walk();  // From Mammal
    human.speak(); // Own method
    return 0;
}

// hierarchical inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing..." << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.eat();  // Inherited from Animal
    dog.bark(); // Dog's own method

    cat.eat();  // Inherited from Animal
    cat.meow(); // Cat's own method
    return 0;
}
