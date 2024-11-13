#include <iostream>
using namespace std;

class element
{
public:
    int a;
    void setData(int a)
    {
       this->a = a; //this pointer use which is aa pointer which is points the objects and 
    }
    void getData()
    {
        cout << a;
    }
};
int main()
{
    element obj;
    obj.setData(4);
    obj.getData();
}
