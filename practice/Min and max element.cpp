#include <bits/stdc++.h>
// largest and smallest element from an array  
using namespace std;

int main (){
    int n = 5, arr[5];  // Declare the size of the array and the array itself
    int max = INT_MIN, min = INT_MAX;  // Initialize max and min with appropriate values
    cout << "Please enter the 5 numbers:";
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout << "Minimum element in the array is: " << min << endl;
    cout << "Maximum element in the array is: " << max << endl;

    return 0;
}
