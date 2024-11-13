#include <iostream>
using namespace std;

class operation
{
    int a;
    int b;

public:
    /*  operation ( int i, int j) : a(b), b(i)
      {
          cout<<"The value is "<<endl;
          cout <<"The value is : "<<a<<endl;

          // What happens here:
    1. a is initialized with the value of b, but b is not yet initialized, so a gets a garbage (unexpected) value.
    2. Then b is initialized with i.
    3. This can lead to unexpected or undefined behavior since b does not hold a valid value when a is being assigned.//


          cout <<"The value is : "<<b<<endl;
      }*/

    operation(int i, int j) : a(i), b(j)
    {
        cout << "The value is " << endl;
        cout << "The value is : " << a << endl;
        cout << "The value is : " << b << endl;
    }
};
int main()
{
    // initialization of list --> initializa constructor using variable parameters...
    // syntax :  cons-name(assigning parameters) : parameters logics

    operation obj(3, 4);
    return 0;
}