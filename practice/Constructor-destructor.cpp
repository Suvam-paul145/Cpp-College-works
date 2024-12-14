#include <iostream>
using namespace std;

class Myname
{
public:
	// Approach 1
	string name;
	Myname(string Candidatename)
	{
		name = Candidatename;
		cout << "Constructor:"
			 << "The candidate name is:"
			 << name << endl;
	}
	// destructor 
	~Myname()
	{
		cout << "Destructor:"
			 << "The candidate name is :"
			 << name << endl;
	}

	/*Approach 2*/
	// Myname(string s)
	// {
	// 	cout << "This is my name: " << s << endl;
	// }

	int sum(int a, int b)
	{
		return a + b;
	}
};

int main()
{

	/*Approach 1*/
	Myname obj("Suvam");
	cout << obj.sum(4, 4); // destrucot destroies the instences of that class that means the object that why first constructor then destructor executed but we cannot use that object in another function calling

	// Myname obj("Suvam");
	return 0;
}