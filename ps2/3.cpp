#include<iostream>
using namespace std;
double convert(int paceMin,int paceSec);
double convert(double kPh);
double convert(int paceMin,int paceSec){
	int secpermile;
	double mph;
	paceMin*60+paceSec;
	mph=(1/static_cast<double>(secpermile))*3600;
	return mph;
}
double converttoMph(double kPH){
	double mph;
	mph=kPH/1.61;
}
int main(int argc, char *argv[])
{
	cout<<"5.30 pace is"<<converttoMph
		(5.30)<<"MPH"<<endl;
	cout<<"20 kph"<<converttoMph(20)<<"MPH"<<endl;
	return 0;
}
