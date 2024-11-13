#include <iostream>
using namespace std;

class Function{
	public:
	int x,y;
	void fun1(int x,int y){
		cout<<"This is from fun1 integer"<<endl;
	}
	void fun1(float){
		cout<<"This is from fun1 float";		
	}
};

int main(){
	Function obj;
	obj.fun1(2,3);
	obj.fun1(2.3);
}