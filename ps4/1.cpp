#include<iostream>
using	namespace std;
int calc(int quiz1,int quiz2,int midterm,int finall){
	int result;
	result=((quiz1+quiz2)/2.0)*10*25/100.0;
	result+=(midterm)*25/100.0+(finall)*50/100.0;
	return result;
}
void fun_grade(int result ){
	if(result>=90){
		cout<<"A";
	}
	else if(result <=90 && result>=80){
		cout<<"B";
	}
	else if(result <=80 && result>=70){
		cout<<"C";
	}
	else if(result<=70 && result>=60){
		cout<<"D";
	}
	else if(60>=result){
		cout<<"F";
	}
}
struct x{
	int quiz1;
	int quiz2;
	int midterm;
	int finall;
};
int main(){
	x struct1;
	int result;
	cout<<"write 2 quizes one midterm 1 final note"<<endl;
	cin>>struct1.quiz1>>struct1.quiz2>>struct1.midterm
		>>struct1.finall;
	result=calc(struct1.quiz1,struct1.quiz2,struct1.midterm,struct1.finall);
	fun_grade(result);

}
