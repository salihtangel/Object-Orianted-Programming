#include<iostream>
using namespace std;
//2 parameterli olucak
class second{
	public:
		second(){
			fun(2,5);//first part
			c=0;
			fun2(1,9);//second part
			print();//print part
		}
		int fun(int a,int b);
		int fun2(int a,int b);
		void print();
	private:
		int a;
		int b;
		int c=0;
		int temp;
		char x[20]="abcdefghijklmnoprs";
		char y[20]="1234567890";
};
int second::fun(int a,int b){
	if(c==a){
		temp=x[a];
	}else if(c==b){
		x[a]=x[b];
		x[b]=temp;
		return 1;
	}
	x[c++];
	return fun(a,b);
}
int second::fun2(int a,int b){
	if(a < b){
		temp = y[a];
		y[a] = y[b];
		y[b] = temp;
		a++;
		b--;
	}else if(a==b){return 1;}
	return fun2(a,b);
}
void second::print(){
	cout<<y;
	cout<<endl<<x<<endl;
}
int main(int argc, char *argv[]){
	second t;
	return 0;
}
