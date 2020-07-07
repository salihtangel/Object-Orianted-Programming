#include <iostream>
using namespace std;
const int MAX =100;
int main() {
		class PrimeNumber{
		public:
			void set(int first){
				x=first;
			}
			int get_x(){
				return x;
			}
			int operator ++(int x){
				int i;
				if(x==1)
					return 3;
				x=i-1;
			#if 0
				while(1){
					x++;
					while(x%i!=0){
						if(i==2)
							return x;
						i--;
					}
				}
			#endif
			}
			int operator --(int x){
				return 0;
			}
		private:
			int x;
		};

		PrimeNumber X;
		X.set(1);
		X.get_x();
		cout<<"++ "<<X++<<endl;
		cout<<"-- "<<X--<<endl;

}
