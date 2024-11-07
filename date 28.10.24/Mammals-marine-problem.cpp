#include <iostream>
using namespace std;

class mammals {
	public:
		void display1() {
			cout<<"I am mammals"<<endl;

		}

};

class marine {
	public:
		void display2() {
			cout<<"I am marine animals"<<endl;

		}

};

class BlueWhale : public mammals,marine {
	public:
		void display3() {
			cout<<"I belongeed to both of catagories : mammals as well as marine animals."<<endl;

		}

};

int main() {
	mammals obj1;
	marine obj2;
	BlueWhale obj3;
	obj1.display1();
	obj2.display2();
	obj3.display3();
	obj3.display1();
	


}