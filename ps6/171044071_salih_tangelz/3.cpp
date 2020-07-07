#include<iostream>
#include<cstdlib>
using namespace std;
//Represent rational numbers as two values of type int , one for the
//numerator and one for the denominator.0

//Include a constructor with two arguments that can be used to
//set the member variables of an object to any legitimate values.

//Also include a constructor that has only
//a single parameter of type int ; call this single parameter wholeNumber and define the constructor so
//that the object will be initialized to the rational number wholeNumber /1.
//Include a default constructor
//that initializes an object to 0 (that is, to 0/1).
class Rational
{
	public:
		Rational(){
			numerator =0;
			cout<<numerator<<endl;
		}
		Rational(int wholeNumber){
			cout<<wholeNumber*1*numerator<<endl;
		}
		Rational(char firstValue,char secondValue)
			{
				cout<<firstValue<<"/"<<secondValue<<endl;

			}
	char & operator[](int index);
	private:
		int	numerator=3;
		int	denominator=5;
};
int main(){
	Rational a();
	Rational a2(5);
	Rational a3(3,4);
	return 0;
}
