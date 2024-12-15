#include <iostream>
using namespace std;

class summation
{
public:
    int sum;
    int sub;
    summation(int x, int y)
    {
        sum = x + y;
    }
    void substraction(int a, int b)
    {
        sub = b - a;
        cout << "Subtraction is: " << sub;
    }
    void summationDisplay()
    {
        cout << "The summation result is:" << sum << endl;
    }
};

int main()
{
    // summation obj(10, 20);
    summation obj(20, 30);

    obj.summationDisplay();
    obj.substraction(2, 5);
    return 0;
}