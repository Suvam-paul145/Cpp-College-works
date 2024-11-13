/*#include <iostream>
using namespace std;

class BankAccount {
	private:
		// Private data members: Not accessible from outside the class
		int accountNumber;
		double balance;

	public:
		// Constructor to initialize account details
		BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

		// Public method to deposit money: Provides controlled access to balance
		void deposit(double amount) {
			if (amount > 0) {
				balance += amount;
				cout << "Deposited: " << amount << endl;
			} else {
				cout << "Invalid deposit amount!" << endl;
			}
		}

		// Public method to withdraw money: Provides controlled access to balance
		void withdraw(double amount) {
			if (amount > 0 && amount <= balance) {
				balance -= amount;
				cout << "Withdrawn: " << amount << endl;
			} else {
				cout << "Insufficient balance or invalid amount!" << endl;
			}
		}

		// Public method to check balance: Allows read-only access to balance
		double getBalance() {
			return balance;
		}

		// Public method to display account number
		int getAccountNumber() {
			return accountNumber;
		}
};

int main() {
	// Creating an object of BankAccount with account number and initial balance
	BankAccount myAccount(123456, 1000.0);

	// Accessing data using public methods
	cout << "Account Number: " << myAccount.getAccountNumber() << endl;
	cout << "Initial Balance: $" << myAccount.getBalance() << endl;

	// Depositing money
	myAccount.deposit(500.0);
	cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

	// Withdrawing money
	myAccount.withdraw(300.0);
	cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

	// Trying an invalid withdrawal
	myAccount.withdraw(1500.0);  // Should show an error message

	return 0;
}
*/


	//	private the data member through which this will not be accessible out of the class 
	// 	The scope of data member allows within the scope of the class

#include<iostream>
using namespace std;

class BankAccount {

	private:
		int accno;
		int bal;

	public:
		void withdraw(int money) {
			if(bal>=money) {
				bal-=money;
				cout<<money<<" :deposited from your account"<<endl;
				cout<<"My current5 balance is: "<<bal<<endl;
			} else {
				cout<<"You have not sufficient balance !"<<endl;
			}
		}

		void deposit(int money) {
			bal+=money;
			cout<<money<<" :amunt added in uour account succesfully!"<<endl;
		}

		void display() {
			cout<<"Your current balance is: "<<bal<<endl;
		}

};
int main() {
		BankAccount obj;
		obj.deposit(1000);		
		obj.withdraw(100);
		obj.display();
}















