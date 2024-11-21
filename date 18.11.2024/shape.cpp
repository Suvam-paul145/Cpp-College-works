#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

// Base class: Shape
class Shape {
protected:
    double x, y;

public:
    // Function to initialize data members
    virtual void get_data(double a, double b = 0) {
        x = a;
        y = b;
    }

    // Virtual function to calculate and display area
    virtual void display_area() = 0; // Pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void display_area() override {
        double area = x * y;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * x * y;
        cout << "Area of Triangle: " << area << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void get_data(double radius, double b = 0) override {
        x = radius; // Only one value is needed
    }

    void display_area() override {
        double area = M_PI * x * x; // π * r^2
        cout << "Area of Circle: " << area << endl;
    }
};

int main() {
    Shape *shape = nullptr;
    int choice;

    do {
        cout << "\nChoose a shape to calculate the area:\n";
        cout << "1. Rectangle\n2. Triangle\n3. Circle\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double length, breadth;
                cout << "Enter length and breadth of the rectangle: ";
                cin >> length >> breadth;

                shape = new Rectangle();
                shape->get_data(length, breadth);
                shape->display_area();
                delete shape; // Free memory
                break;
            }
            case 2: {
                double base, height;
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;

                shape = new Triangle();
                shape->get_data(base, height);
                shape->display_area();
                delete shape; // Free memory
                break;
            }
            case 3: {
                double radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;

                shape = new Circle();
                shape->get_data(radius);
                shape->display_area();
                delete shape; // Free memory
                break;
            }
            case 4:
                cout << "Exiting the program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
