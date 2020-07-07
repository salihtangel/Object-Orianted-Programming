#include<iostream>
using namespace std;
//tek parameterli olucak
class fibonacci{
	public:
		fibonacci(){
			fun(6);//you will give nth fibonacci here
		}
		int fun(int n);
	private:
		int f=1;
		int f_2=1;
		int f2_temp=1;
};
int fibonacci::fun(int n){
	if(n==0){
		cout<<f;
		exit(1);
	}
	f=f_2+f2_temp;
	f2_temp=f_2;
	f_2=f;
	return fun(--n);
}
int main(int argc, char *argv[])
{
	fibonacci x;
	return 0;
}
