// This C++ program demonstrates dynamic memory management using constructors and destructors within a class. A class named MyClass is created with a pointer that stores the address of a dynamically allocated integer array. The constructor initializes this array with a specified size, allocating memory on the heap, and displays a message confirming successful memory allocation.

//	When the object of MyClass goes out of scope (as main() ends), the destructor is automatically called. This releases the allocated memory, preventing memory leaks, and displays a message indicating memory deallocation. The code showcases the RAII (Resource Acquisition Is Initialization) concept, where resources are acquired in the constructor and automatically freed in the destructor. This pattern helps in efficient resource management and minimizes memory leaks.

#include <iostream>
using namespace std;

class Myclass
{
private:
	int *data;

public:
	Myclass(int size)
	{
		data = new int[size];
		cout << "This is a constructor" << endl;
	}

	~Myclass()
	{
		delete[] data;
		cout << "This is destructor" << endl;
	}
};

int main()
{
	Myclass obj(10);
	return 0;
}

// 