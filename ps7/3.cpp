#include <iostream>
#include <string>
using namespace std;
#if 0
Provide a default constructor, a copy constructor,
    and a parameterized constructor that enables an arbitrary polynomial to be
	    constructed.using namespace std;
#endif
class Polynomial {
	private:
		char** pol = new char*[50];
		int x;
		int a,b;
	public:
		// Copy constructor
		Polynomial(const Polynomial& p2) {x = p2.x;}
		//getter
		int getX()const { return x; }
		// Default constructor
		Polynomial() {a = 10;b = 20;}
		// Parameterized constructor
		Polynomial(int x ,int y) {a=x;b=y;}
		//Destructor
		~Polynomial();

	Polynomial operator + (Polynomial const &obj) {
		 Polynomial res;
		 cout<<"add"<<endl;
		// res.real = real + obj.real;
		//res.imag = imag + obj.imag;
		// return res;
	}
	void operator == (Polynomial const &obj) {
		 cout<<"=="<<endl;
		//  if(real == obj.real && imag == obj.imag){
		//	cout<<"yes it is equal"<<endl;
		//	return;
		//  }
		  //else{
		//	  cout<<"not equal"<<endl;
		 // }
	}
};

int main() {
	// Default Polynomialor called automatically
	// when the object is created
	Polynomial c;
	return 1;
}
