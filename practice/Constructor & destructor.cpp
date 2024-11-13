#include<iostream>
using namespace std;

class Myname {
	public:
		string name;
		Myname(string Candidatename) {
			name = Candidatename;
cout<<"Constructor:"
    <<"The candidate name is:"
			    <<name<<endl;
		}
		~Myname(){
cout<<"Destructor:"
    <<"The candidate name is :"
			    <<name<<endl;
		}
};

int main() {
	Myname obj("Suvam");
	Myname obj1("Rupam");
	return 0;
}