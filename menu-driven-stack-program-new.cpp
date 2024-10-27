#include <iostream>
using namespace std;

int stack[5],top=-1,choice,value;
void PUSH(int n){
	if(top==4){
		cout<<"Stack is overflow"<<endl;
	}
	else{
		++top;
		stack[top]=value;
		cout<<value<<" :Pushed into the stack"<<endl;
	}
}

void POP(){
	if(top==-1){
		cout<<"Stack is Underflow"<<endl;
	}
	else {
		stack[top]=0;
		--top;
	}
}

void Display(){
	for(int i=0;i<=top;i++){
		cout<<stack[i];
	}
}

void PEEK(){
	cout<<"Top value is: "<<stack[top];
	
}
int main (){
	
	cout<<"1. PUSH opertion"<<endl;
	cout<<"2. POP operation"<<endl;
	cout<<"3. PEEK operation"<<endl;
	cout<<"4. Display operation"<<endl;
	cout<<"5. Exit"<<endl;
	
	do{
	cout<<"Enter your choice:";
	cin>> choice;
	
		switch(choice){
		case 1:
			cout<<"Please enter a value for PUSH oiperation:";
			cin>>value;
			PUSH(value);
			break;
		case 2:
			POP();
			break;
		case 3:
			PEEK();
			break;
		case 4:
			Display();
			break;
		case 5:
			cout<< "Exiting the program..";
			break;
		default:
			cout<<"Invalid choice! please try again"<<endl;
			break;  
			 }
   }while(choice!=5);
return 0;
}