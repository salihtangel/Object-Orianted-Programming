#include <iostream>
#include <vector>
using namespace std;

class Point{
	private:
		int i;
		int j;
	public:
		void set_point();
		void move_point();
		void rotate_point();
		const int inspector_point_x(){
		return i;} ;
		const int inspector_point_y(){
		return j;}

};
void Point :: set_point(){
	cout<<"choose point"<<endl;
	cin>>i>>j;
	cout<<i<<","<<j<<endl;
}
void Point :: move_point(){
	int temp;
	cout<<"move the (x)and (y)"<<endl;
	cin>>temp;	//new cordinates
	i+=temp;
	cin>>temp;
	j+=temp;
	cout<<i<<","<<j<<endl;
}
void Point :: rotate_point(){
	cout<<"rotate 90 degree"<<endl;
	int temp2=i;
	i=j;		//2 statement for 90 degree
	j=-temp2;
	cout<<i<<","<<j<<endl;
}
int main() {
	Point x;
	x.set_point();
	x.move_point();
	x.rotate_point();
	cout<<x.inspector_point_x()<<endl;
	cout<<x.inspector_point_y();
}
