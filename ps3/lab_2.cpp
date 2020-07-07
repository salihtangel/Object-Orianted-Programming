#include<iostream>
using namespace std;

int main(){
	int dollars=0;
	int bars=0;
	int newbars=0;
	int coupons=0;

	cout<<endl<<"ENter the dollars"<<endl;
	cin>>dollars;
	bars=dollars;
	coupons=bars;
	while(coupons>=7){
	newbars=coupons/7;
	bars=newbars+bars;
	coupons=(coupons%7)+newbars;
	}
	cout<<"You can get"<<bars<<"chocolate bars"<<"and"<<coupons<<"coupons\n";
}
