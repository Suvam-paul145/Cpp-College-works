/*#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() : data(0) {}

    // Friend function declaration
    friend void display(MyClass &obj);
};

// Friend function definition
void display(MyClass &obj) {
    cout << "Data: " << obj.data << endl;
}

int main() {
    MyClass obj;
    display(obj);
    return 0;
}
*/

#include <iostream>
using namespace std;

class Myclass{
	private:
		int data;
	public:
		Myclass() : data(0){
			
		}
		
	friend void display (Myclass &obj);
		
};

void display(Myclass &obj){
	cout<< "The data value is :"<<obj.data<<endl;
}

int main(){
	Myclass obj;
	display (obj);
	return 0;

}