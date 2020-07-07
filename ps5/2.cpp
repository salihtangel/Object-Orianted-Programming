#include <iostream>
using namespace std;
int main() {
		class MyInteger{
		public:
			void set(int first,int position){
				x=first;
				i=position;
			}
			int get_x(){
				return x;
			}
			int operator[](int x){
				char a[10];
				int j=0;
				while(j<10){
					int temp=x;
					a[j]=temp%10;
					temp=temp/10;
					j++;
				}
				cout<<a;
				return 1;
			}
		private:
			int x;
			int i;
		};
		MyInteger x;
		int m;
		int position;
		cout<<"get number and i?"<<endl;
		cin>>m>>position;
		x.set(m,position);
		x.get_x();
		cout<<"result is "<<x[position]<<endl;
}
