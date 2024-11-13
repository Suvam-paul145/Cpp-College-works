#include <iostream>
using namespace std;

inline int add(int x, int y){
	return x+y;
}

int add(int a,int b){
	return a+b;
}

int main (){
	cout<<"The summation is: "<<add(5,3);
}