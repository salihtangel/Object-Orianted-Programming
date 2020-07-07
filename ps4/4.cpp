#include <iostream>
#include <vector>
using namespace std;
const int deep_dish=0;//0
const int hand_tossed=1;//1
const int pan=2;//2

const int small=-1;//-1
const int medium=-2;//-2
const int large=-3;//-3


class Pizza{
	private:
		int pepperoni;
	public:
		int get_pepperoni(){	//accessor
			return pepperoni;}
		void set_pepperoni(int new_pepperoni){	//mutator
			pepperoni=new_pepperoni;}
};
void  outputDescription(int type,int size){
	if(size== small){
		cout<<"small";
	}else if(size== medium){
		cout<<"medium";
	}else if(size== large){
		cout<<"large";
	}
	if(type ==deep_dish){
		cout<<"	and deep dish";
	}else if(type ==hand_tossed ){
		cout<<"	and hand tossed";
	}else if(type == pan){
		cout<<"	and pan";
	}
	cout<<endl;
}
double computePrice(int size,int pepperoni){
	double price=0;
	if (size == small)
		price+=10;
	else if(size == medium){
		price+=14;
	}
	else if(size == large){
		price+=17;
	}
	price=price+(pepperoni*2);
	return price;
}
int main() {
	int size;
	int type;
	double price;
	Pizza x;
	int pepperoni=x.get_pepperoni();

	cout<<"0->deep dish \n1-> hand tossed\n2->pan"<<endl;
	cin>>type;
	cout<<"-1->small\n-2->medium\n-3->large"<<endl;
	cin>>size;
	cout<<"how many pepperoni do you want"<<endl;
	cin>>pepperoni;
	outputDescription(type,size);
	cout<<computePrice(size,pepperoni)<<"$";
}
