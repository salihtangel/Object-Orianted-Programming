// Include a constructor that has only a single parameter of type double
// a and b are numbers of type double,
// and i is a number that represents the quantity √−1.
// Include a constructor with two parameters of type double that can be used to
// set the member variables of an object to any values. Include a default
// constructor that initializes an object to 0 (that is, to 0 + 0*i ).
// == , + , - , * , >> , and << .
#include <iostream>
using namespace std;
class Complex {
    private:
	double real, imag;
    public:
	//const Complex i(0, 1);
	Complex(double r , double i ) {
		real = r;
		imag = i;
	}
	friend ostream &operator<<(ostream &out, const Complex &c);
	friend istream &operator>>(istream &in, Complex &c);
	Complex(){
		real=0;
		imag=0;
	}
	Complex(double Realpart){
		real=0;
	}
	Complex operator + (Complex const &obj) {
		 Complex res;
		 cout<<"add"<<endl;
		 res.real = real + obj.real;
		 res.imag = imag + obj.imag;
		 return res;
	}
	Complex operator - (Complex const &obj) {
		 Complex res;
		 cout<<"sub"<<endl;
		 res.real = real - obj.real;
		 res.imag = imag - obj.imag;
		 return res;
	}
	Complex get_i(const Complex i){
		Complex s;
		s.real=i.real;
		s.imag=i.imag;
		return s;
	}
	void operator == (Complex const &obj) {
		 cout<<"=="<<endl;
		  if(real == obj.real && imag == obj.imag){
			cout<<"yes it is equal"<<endl;
		 	return;
		  }
		  else{
			  cout<<"not equal"<<endl;
		  }
	}
	int operator *(Complex const &obj){
		 cout<<"*"<<endl;
		const Complex get_i(0,1);
	if(	(real + imag*get_i.imag*-1)*(obj.real + obj.imag*get_i.imag*-1) == (real*obj.real - imag*obj.imag*-1) + (real*obj.imag + imag*obj.real)*get_i.imag*-1){
	cout<<"equal";	return 1;
	}
	else{cout<<"not equal";return 0;}
	}


	void print() { cout << real <<"+ "<< imag <<  "i"<< endl; }
	};//end of class

ostream &operator<<(ostream &out, const Complex &c) {
	out << c.real;
	out << "+ " << c.imag <<"i"<< endl;
	return out;
}

istream &operator>>(istream &in, Complex &c) {
	cout << "Enter Real Part ";
	in >> c.real;
	cout << "Enter Imaginary Part ";
	in >> c.imag;
	return in;
}
int main() {
	cout<<"i give constructors 3+5i and 1,2i for add"<<endl
	<<"i give constructors 3+5i and 1,2i for sub"<<endl
	<<"i give constructors 2+2i and 2,2i for =="<<endl;
	Complex c1(0,0);
	Complex c2(3,5),c3(1,2);
	Complex ca(2,2),cb(2,2);
	Complex c4=c2+c3;
	c4.print();
	Complex c5=c2-c3;
	c5.print();
	ca==cb;
	cout<<c2*c3<<endl;
	cin >> c1;
	cout << "The complex object is ";
	cout << c1;
	return 0;
}

