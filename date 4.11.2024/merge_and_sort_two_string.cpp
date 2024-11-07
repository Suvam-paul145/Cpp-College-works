#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Please enter the number of elements for array 1: ";
    cin >> n1;
    cout << "Please enter the number of elements for array 2: ";
    cin >> n2;

    int arr1[n1], arr2[n2];
    int *p, *q;
    p = arr1;
    q = arr2;

    cout << "Please enter the numbers for the first array separated by spaces: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Please enter the numbers for the second array separated by spaces: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int result[n1 + n2];

    for (int i = 0; i < n1; i++)
    {
        result[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        result[n1 + i] = arr2[i];
    }


    for (int i = 0; i < n1 + n2 - 1; i++)
    {
        for (int j = 0; j < n1 + n2 - 1 - i; j++)
        {
            if (result[j] > result[j + 1])
            {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    cout << "The sorted merged array is: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
