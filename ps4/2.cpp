#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> g1;			//object for class
	int n;				//suitor num
	int point=2;			//for record which position you are

	cin>>n;				//take suitor num
	for (int i = 1; i <= n; i++) g1.push_back(i);

	cout << "initial suitors: ";
	for (auto i = g1.begin(); i != g1.end(); ++i) cout << *i << " ";

	cout<<endl;
	while(g1.size()>1){
		if(point>=g1.size())	//  mod operation
			point%=g1.size();
		g1.erase((g1.begin()+point));	//erase operation
		point+=2;		//it is starting 1. index probably. i could not use 3
		cout << "new suitors: ";
		for (auto i = g1.begin(); i != g1.end(); ++i) cout << *i << " ";
	}
	cout<<"is winner"<<endl;
}
