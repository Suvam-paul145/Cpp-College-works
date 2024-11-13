#include <iostream>
using namespace std;

class Shape {
	public:
		virtual void draw()=0;   //pure virtual function
};

class Circle : public Shape {
	public:
		void	draw() override {
			cout<<"this is one circle"<<endl;
		}
};
class Square : public Shape {
	public:
		void	draw() override {
			cout<<"this is one square"<<endl;
		}
};

int main() {
	Shape *Obj1 = new Circle;
	Shape *Obj2 = new Square;
	
	Obj1->draw();
	Obj2->draw();
	
	delete Obj1;
	delete Obj2;
	
	return 0;
}