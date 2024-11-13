#include <iostream>
   /*using the implemenmtation of namespace*/
class MyClass{
	public:
	int height, length;

	int RectArea(int height,int length){
		return height*length;
	}
	
};

	int Rectperimeter(int height, int length){
		return 2*(height + length);
	}

int main(){
	MyClass obj;
	std ::cout<< "The area of rectangle inside the class is:" << obj.RectArea(5,4)<< std ::endl; 
	std ::cout<<"The perimeter of rectangle outside the class is:" << Rectperimeter(10,2);
	
	}
	