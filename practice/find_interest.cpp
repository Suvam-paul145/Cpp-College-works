#include <iostream>
using namespace std;

class Interest {
	public:
		int p = 2000, t = 2, r = 5;
		double calculateInterest() {
			double interest_sum;
			interest_sum = p * t * r / 100;
			return interest_sum;
		}
};

int main() {
	Interest obj;
	cout << "The interest of the money is: " << obj.calculateInterest() << endl;
}
