#include <iostream>
using namespace std;

class ShopItems
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "the id of the items is " << id << endl;
        cout << "the price of the item is " << price << endl;
    }
};

int main()
{
    int size = 2;
    //int *ptr = &size;

    // ShopItems *ptr = new ShopItems[3];
    ShopItems *ptr = new ShopItems[size];  
    ShopItems *ptrTemp= ptr;
    int p,q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of items "<<i+1<<" are "<<endl;
        cin>>p>>q;
        ptrTemp->setData(p,q); // Or you can use it as (*ptr).setdata(p,q)
        ptrTemp++;
    }
    
    for (int j = 0; j < size; j++)
    {
        cout<<"the item no is "<<j+1<<endl;
        ptr->getData();
        ptr++;
    }
    

    return 0;
}