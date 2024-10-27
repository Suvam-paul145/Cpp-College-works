#include <bits/stdc++.h>
//#include <cmath>
using namespace std;
int main(){
    int n , factorial =1;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<"The factorial of "<<n +"no is :"<<factorial;
    
}