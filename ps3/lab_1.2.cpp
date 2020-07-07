#include<iostream>
using namespace std;

int main(){
	int n,i;
	bool isprime;
	for(n=3;n<=100;n++){
	isprime=true;
		for(i=2;i<n-1;i++){
			if((n%i)==0){
				isprime=false;
			}
		}
	if(isprime){
	cout<<n<<"is a prime number."<<endl;}
	}
}
