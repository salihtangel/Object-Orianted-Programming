#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	static int notes[10];
	static int repeated[10];
	int i=0;
	while(i<10){
		cin>>notes[i];
		i++;
	}
	for(i=0;i<10;i++){
		if(notes[i]==0)
			repeated[0]+=1;;
		if(notes[i]==1)
			repeated[1]+=1;;
		if(notes[i]==2)
			repeated[2]+=1;;
		if(notes[i]==3)
			repeated[3]+=1;;
		if(notes[i]==4)
			repeated[4]+=1;;
		if(notes[i]==5)
			repeated[5]+=1;;
	}
	for(i=0;i<6;i++)
		cout<<"result:"<<repeated[i]<<endl;
	return 0;
}
