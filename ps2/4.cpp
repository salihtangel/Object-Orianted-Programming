#include <fstream>
#include <iostream>
using namespace std;

	void getHighScore(string&name,int &higscore){
	string curname
	int curscore;
	bool firstread=true;
	fstream inputStream;
	inputStream.open("soccer.txt");
	while(inputStream>>curname){
		inputStream>>curscore;
		if(firstread){
			firstread=false;
			name=curname;
			higscore=curscore;
		}else{
		}
	}

int main(int argc, char *argv[])
{
	return 0;
}
