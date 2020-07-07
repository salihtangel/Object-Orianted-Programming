#include<iostream>
#include<cstdlib>
using namespace std;

class CharPair
{
	public:
		CharPair(){
			size =10;
			for(int i=0;i<10;i++)	first[i]='#';
		}
		CharPair(int sz){
			for(int i=0;i<sz;i++) second[i]='#';
		}
		CharPair(int sz,int sz_2){
			if(sz>sz_2){
				cout<<"overloaded";
				exit(1);
			}
			for(int i=0;i<sz;i++) second[i]=first[i];
		}
		int get()const{
			return size;
		}
		char*   get_one(){
			return first;
		}
		char*   get_two(){
			return second;
		}
#if 0
		CharPair(char firstValue,char secondValue)
				:first(firstValue),second(secondValue)
			{//emty
			}
#endif
	char & operator[](int index);
	private:
		char first[100];
		char second[100];
		int size;
};
int main(){
	CharPair a;
	cout<<"a[1] and a[2] are:\n"<<endl;
	cout<<a[1]<<endl << a[2] << endl;
	cout<<"c part"<<endl;
	cout<<"i choose 50 character you can change it"<<endl;
	CharPair a2(50);
	cout<<a2.get_two();
	cout<<endl<<"d part"<<endl;
	cout<<"i choose 50 character you can change it"<<endl;
	CharPair(50,100);
	cout<<a2.get_two();
#if 0
	cout<<"Enter two letters (no spaces):\n";
	cin>> a[1]  >> a[2];
	cout<< "You entered:\n";
	cout<< a[1] << a[2] <<endl;
#endif
	return 0;
}
//Uses iostream and cstdlib
char& CharPair::operator[](int index)
{
	char choice;
	cout<<"wanna do change it(y)(n)"<<endl;
	cin>>choice;
	if(choice == 'n'){
		return first[index];
	}
	if(choice == 'y'){
		cout<<"what do you want to do this character?"<<endl;
		cin>>choice;
		first[index]=choice;
		return first[index];
	}
	else{
		exit(1);
	}
#if 0
	if(index ==1)
		return first;
	else if(index ==2)
		return second;
	else{
		cout << "Illegal index value.\n";
		exit(1);
	}
#endif
}
