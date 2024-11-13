#include <iostream>
using namespace std;

class MyClass{
	public:
	int height, length;
	//inside  the class
	int RectArea(int height,int length){
		return height*length;
	}
	
};
	//outside of the class 
	int Rectperimeter(int height, int length){
		return 2*(height + length);
	}

int main(){
	MyClass obj;
	cout<< "The area of rectangle inside the class is:" << obj.RectArea(5,4)<<endl; 
	cout<<"The perimeter of rectangle outside the class is:" << Rectperimeter(10,2);
	
	}
	