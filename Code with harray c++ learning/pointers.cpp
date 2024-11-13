#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "the value of a is " << *ptr << endl;

    // new keyqword operator
    int *p = new int(40);
    cout << "the value of p is " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20; // Or we can write it as *(arr +1) = arr[1];  //in general *(arr +i) = arr[i]
    arr[2] = 30;

    // delete keyword
    /*  delete arr;  //only delete array the output will be unexpected means some of the values will be correct or wrong(garbage value) */
    /*  delete[] arr;  // delete array and free the all memory the output will be all of the values will be wrong(garbage value) */
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    return 0;
}