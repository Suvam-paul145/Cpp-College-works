/*#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int height;

public:
    // Constructor 1: Default constructor
    Rectangle() {
        width = 0;
        height = 0;
        cout << "Default constructor called!" << endl;
    }

    // Constructor 2: Constructor with one parameter
    Rectangle(int w) {
        width = w;
        height = w;  // Assuming square shape if only one dimension is provided
        cout << "Constructor with one parameter called!" << endl;
    }

    // Constructor 3: Constructor with two parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
        cout << "Constructor with two parameters called!" << endl;
    }

    // Method to display the dimensions
    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Using different constructors to create objects
    Rectangle rect1;            // Calls the default constructor
    Rectangle rect2(10);        // Calls the constructor with one parameter
    Rectangle rect3(10, 20);    // Calls the constructor with two parameters

    // Displaying the dimensions of each object
    rect1.display();  // Width: 0, Height: 0
    rect2.display();  // Width: 10, Height: 10
    rect3.display();  // Width: 10, Height: 20

    return 0;
}
*/

#include<iostream>
using namespace std;

class Rectangle{

    private:
    int area;
    int perimeter;

    public:
     Rectangle(){
        cout<<"This is 1st one:"<<endl;
     }
     Rectangle(int h, int w){
        area= w*h;
        cout<<"the area of the rectangle is: "<<area<<endl;
     }
     Rectangle(float h, float w){
        perimeter = 2*(w+h);
        cout<<"the area of the perimeter is: "<<perimeter<<endl;
     }

};

int main (){
    Rectangle obj1;
    Rectangle obj2(10, 20);
    Rectangle obj3(2.5,5);
}