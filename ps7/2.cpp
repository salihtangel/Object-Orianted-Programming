#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		string name;
		int numClasses;
		char **classlist=new char*[10];
	public:
		int get_num(){
			return numClasses;
		}
		string get_name(){
			return name;
		}
		char **get_classlist(){
			return classList;
		}
		void set(int newnum,string newname,char **newlist){
			numClasses=newnum;
			name=newname;
			classList=newlist;
		}
		Student(string name,int numClasses){
				name="salih";
				numClasses=10;
		}
		void fun_input(int numClasses,string name,char **classlist);
		void fun_ouput(string name,char **classlist);
		void fun_reset(int numClasses,char**classlist){
			numClasses =0;
			free classList;
		}
};

void Student::fun_input(int numClasses,string name,char **classlist){
		int max=100;
		cout<<"write all courses"<<endl;
		for(numClasses=0;numClasses<max;numClasses++){
			cin>>classList;
			numClasses++;
		}
		cout<<"write all student names"<<endl;
		cin>>name;
		//Student x1;
		//x1.set(numCla)
	}
int main(int argc, char *argv[])
{
	Student x1;
	int a=x1.get_num();
	cout<<a;
	return 0;
}
