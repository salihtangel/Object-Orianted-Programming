#include<iostream>
#include<string>
class User{
	public:
		bool Login(string username2,string password2);
		friend class Administrator;
	private:
		string username2;
		string password2;
};

bool User:: Login(string username2,string password2){

	if ((username2=="ali") && (password2=="000") ||
			username == username2 &&
			password==password2) return 1;
	else{
		return 0;
	}
}
