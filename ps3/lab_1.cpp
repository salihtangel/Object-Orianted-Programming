#include<iostream>
using namespace std;

void f(int prime){
	int i=2;
	bool result= true;
	for(;i<prime;i++){
		if(prime%i==0)
			result=false;
	}
	if (result == true)
		cout<<prime<<"is a prime number\n"<<endl;
}
int main(){
	int i=3;
	for(;i<100;i++){
		f(i);
	}
}
