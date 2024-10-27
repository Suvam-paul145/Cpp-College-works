#include <iostream>
using namespace std;

class areaCalculation {
	
		public:
	int squreArea(int base){
		int area= base*base;
		return area;
	}
	double triArea(int base,int height){
		double area= 0.5*base*height;
		return area;
	}

};


int main (){
	areaCalculation obj;
	cout<<"Triangle area is: "<<obj.triArea(10,8)<<endl;
	cout<<"Squre area is: "<<obj.squreArea(8);
	
}