#include <iostream>
using namespace std;
int main() {
		class Vector2D{
		public:
			void set(int first,int second){
				x=first;
				y=second;
			}
			int get_x(){
				return x;
			}
			int get_y(){
				return y;
			}
			int operator*(Vector2D object){
				int a,b;
				a=x*object.x;
				b=y*object.y;
				return a+b;
			}
		private:
			int x;
			int y;
		};
		Vector2D A;
		Vector2D B;
		int a,b;
		int m,n;
		int i,j;
		cout<<"take A and B vectors"<<endl;
		cin>>a>>b;
		A.set(a,b);
		cin>>m>>n;
		B.set(m,n);
		A.get_x(),B.get_x();
		A.get_y(),B.get_y();
		cout<<"dotproduct is	"<<A*B<<endl;

}
