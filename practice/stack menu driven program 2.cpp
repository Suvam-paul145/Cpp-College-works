#include <iostream>
#define MAX_SIZE 100

using namespace std;

int stack[MAX_SIZE];
int top = 0;

void PUSH(int value) {
    if (top == MAX_SIZE) {
        cout << "The stack is full, cannot push more elements." << endl;
    } else {
        stack[top++] = value;
        cout << value << " is PUSHED onto the stack." << endl;
    }
}

void POP() {
    if (top == 0) {
        cout << "The stack is empty, cannot pop elements." << endl;
    } else {
        cout << "The POPPED value is " << stack[--top] << "." << endl;
    }
}

void PEEK() {
    if (top == 0) {
        cout << "The stack is empty, cannot peek elements." << endl;
    } else {
        cout << "The PEEKED value is " << stack[top - 1] << "." << endl;
    }
}

int main() {
    int choice, value;
    cout << "1. PUSH" << endl;
    cout << "2. POP" << endl;
    cout << "3. PEEK" << endl;
    cout << "4. EXIT" << endl;
    do {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter a value to push onto the stack: ";
                cin >> value;
                PUSH(value);
                break;
            case 2:
                POP();
                break;
            case 3:
                PEEK();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
