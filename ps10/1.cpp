#if 0
Be sure your classes have a reasonable complement of constructors and
accessor methods, an overloaded assignment operator, and a copy constructor. Write a driver
program that tests all your methods. The definition of the class Person follows. The
implementation of the class is part of this programming project.
#endif

#include<iostream>
using namespace std;

class Vehicle{
	public:
	string vehicle_name;
	int number_of_cylinders;
	friend class Person;
};
class  Truck :public Vehicle{
	public:
	double load_capacity;
	int towing_capacity;
};
class Person {
    public:
	Person();
	Person(string theName);
	Person(const Person& theObject);
	string getName() const;
	Person& operator=(const Person& rtSide);
	friend istream& operator>>(istream& inStream, Person& personObject)
	{inStream>>personObject.name;}
	friend ostream& operator<<(ostream& outStream,
				   const Person& personObject);

    private:
	string name;
};
int main(int argc, char *argv[])
{
	Person x;
	Person (ahmet);
	cin>>x;
	return 0;
}
