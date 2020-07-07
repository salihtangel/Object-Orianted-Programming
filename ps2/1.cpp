#include<iostream>
//EVDE YAP
using namespace std;
void print_am(int &time1,int &time2){
	cout<<time1<<":"<<time2<<"AM";
}
void print_pm(int &time1,int&time2){
	cout<<time1<<":"<<time2<<"PM";
}
void change(int&time1,int&time2){
	if(time1>12){
		time1%=12;
		print_pm(time1,time2);
	}
	else{
		print_am(time1,time2);
	}
}
int main(int argc, char *argv[])
{
	int time1;
	int time2;
	cout<<"please write a time\n";
	cin>>time1>>time2;
	if(time1>24&&time2>60)
		return 0;
	change(time1,time2);
	return 0;
}
