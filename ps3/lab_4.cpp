#include<iostream>
//kolay bisey sonra yap bunu
using namespace std;
const double gallon=0.264179;
double f(double kilometers,double liters){

		double result;
		result=gallon*liters/kilometers;
		return result;
}
int main(int argc, char *argv[])
{
	double weight;
	double radious;
	double result;
		cout<<"enter weight\n";
		cin>>liters;
		cout<<"enter kilometers\n";
		cin>>kilometers;
		cout<<f(kilometers,liters)<<"gallon fuel is consumed in one kilometer"<<endl;
	return 0;
}
