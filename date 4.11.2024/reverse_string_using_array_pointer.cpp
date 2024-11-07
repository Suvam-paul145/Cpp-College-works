#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string;
    cout << "Please enter a string";
    cin >> string;
    int strlen = string.size();
    cout << "The reverse of string is:";
    for (int i = (strlen)-1; i >= 0; i--)
    {
        cout << string[i];
    }
}

// Do it using an array

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr[100];
    cout << "Please enter a string";
    cin >> arr;
    int n = strlen(arr);
    cout<<"the reverse of the given array is : ";
    for(int i=(n-1); i>=0;i--)
    {
        cout<<arr[i];
    }
    return 0;
}
