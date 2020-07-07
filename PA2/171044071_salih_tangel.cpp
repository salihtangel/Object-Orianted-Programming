#include <bits/stdc++.h>
#include <vector>
#include<string>
#include<fstream>
using namespace std;

class Image{
	public:
		vector<int> fun_open(string filename,vector<int> v);		//open part
		void fun_save(string filename2,vector<int> v);			// save part
		vector <int> fun_grayscale(float red,float green,float blue,vector<int> v);//graysclale working
		float get_red(){
			return red;
		}
		float get_blue(){
			return blue;
		}
		float get_green(){
			return green;
		}
		string firstline;	//for a3
		string secondline;	//for 4 3
		string thirdline;
		string fourthline;	//for 255
	private:
		float red;//for float varibles
		float green;
		float blue;
};
vector<int> Image :: fun_open(string filename,vector<int> v){
			int num=0;
			int i=0;
			  cin>>filename;
			  ifstream myfile;
			  myfile.open (filename);
			 if (!myfile) {				//error check
			    cerr << "Unable to open file datafile.txt";
			    exit(1);   // call system to stop
			}
			myfile>>firstline;
			myfile>>secondline;
			myfile>>thirdline;
			myfile>>fourthline;
			while(myfile>>num){
				v.push_back(num);
			  }
			 myfile.close();
			 return v;
}
void Image :: fun_save(string filename2,vector<int> v){		//not working part
			int i=0;
			int counter=0;
			 ofstream newfile;
			 cin>>filename2;
			 newfile.open(filename2);
			if (!newfile.is_open()) {
			    cerr << "Unable to open file datafile.txt";
			    exit(1);   // call system to stop
			}
			newfile<<firstline<<endl;
			newfile<<secondline<<endl;
			newfile<<thirdline<<endl;
			newfile<<fourthline<<endl;
			for(;i<v.size();i++)
			{
				if(counter%3==0)
					newfile<<"  ";
				if(i%12==0){newfile<<endl;}
				newfile<<v[i];
				newfile<<" ";
				counter++;
			}
			newfile.close();
}
vector<int> Image :: fun_grayscale(float red,float green,float blue,vector<int> v){
	bool exit2=false;
	int i=0;
	string record2;
	//for(i=0;i<v.size();i++)cout<<v[i] ;
	do{
		cout<<"enter float numbers[0,1)"<<endl;
		cin>>red>>green>>blue;
		if(red<1 && red>=0 && green<1 && green>=0 && blue<1 &&blue>=0)
			exit2=false;
		else{
			cout<<"wrong num"<<endl;
			exit2=true;
		}
	}while(exit2);

	for(i=0;i<v.size();i++){	//sorun cikabilir burda
		if(i%3==1){
			v[i]*=green;
		}
		else if(i%3==0){
			v[i]*=red;
		}
		else if(i%3==2){
			v[i]*=blue;
		}
		if(v[i]>255){
			v[i]=255;
		}
	}
	//for(i=0;i<v.size();i++)cout<<v[i] ;		//if you want to see it is working
	return v;
}
int main() {
	// Assign vector
	vector<int> v;
	bool exit = true;
	int choice;
	int choice2;
	string filename;
	string filename2;
	Image x;
	do {
		cout << "Main Menu" << endl
		     << "0-Exit" << endl
		     << "1-Open An Image(D)" << endl
		     << "2-Save Image Data(D)" << endl
		     << "3-Scripts(D)" << endl;
		cin >> choice;
		if (choice == 0)
			exit = false;
		else if (choice == 1) {
			cout << "OPEN AN IMAGE MENU" << endl
			     << "0 - UP" << endl
			     << "1 - Enter The Name Of The Image File" << endl;
			cin >> choice2;
			if (choice2 == 0){} else if (choice2 == 1){
				v=x.fun_open(filename,v);
			}
		} else if (choice == 2) {
			cout << "SAVE IMAGE DATA MENU" << endl
			     << "0 - UP" << endl
			     << "1 - Enter A File Name" << endl;
			cin >> choice2;
			if (choice2 == 0){} else if (choice2 == 1){
				x.fun_save(filename2,v);
				return 1;
			}
		} else if (choice == 3) {
			cout << "SCRIPTS MENU" << endl
			     << "0 - UP" << endl
			     << "1 - Convert To Grayscale(D)" << endl;
			cin >> choice2;
			if (choice2 == 0){} else if (choice2 == 1) {
				cout<<"CONVERT TO GRAYSCALE MENU"<<endl
				<<"0 - UP"<<endl
				<<"1 - Enter Coefficients For RED GREEN And BLUE Channels."<<endl;
				cin >> choice2;
				if (choice2 == 0){} else if (choice2 == 1){
				v=x.fun_grayscale(x.get_red(),x.get_green(),x.get_blue(),v);
				}
			}
		}
	} while (exit);
}

