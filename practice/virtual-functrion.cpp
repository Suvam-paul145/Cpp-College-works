#include <iostream>
using namespace std;

// Base class
class Animal {
	public:
		// Virtual function
		virtual void sound() {
			cout << "Animals make sounds." << endl;
		}
};

// Derived class
class Dog : public Animal {
	public:
		void sound() override {  // Override the base class virtual function
			cout << "Dog barks." << endl;
		}
};

// Another derived class
class Cat : public Animal {
	public:
		void sound() override {  // Override the base class virtual function
			cout << "Cat meows." << endl;
		}
};

int main() {
	/*/Animal* animalPtr;

	Dog dog;
	Cat cat;

	// Pointing to Dog object
	animalPtr = &dog;
	animalPtr->sound(); // Outputs: Dog barks.

	// Pointing to Cat object
	animalPtr = &cat;
	animalPtr->sound(); // Outputs: Cat meows.

	return 0;*/

	Animal *animalptr;

	Dog dog;
	Cat cat;

	animalptr = &dog;
	animalptr ->sound();

	animalptr = &cat;
	animalptr ->sound();
	
	return 0;
	


}
