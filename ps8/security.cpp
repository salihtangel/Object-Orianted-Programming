#include<iostream>
#include<string>

#include"Security.h"
#include"User.h"
#include"Main.h"
using namespace std;

class Security
{
public:
	static int validate(string username, string password);
	friend	Administrator;
	friend  User;
};
// This subroutine hard-codes valid users and is not
// considered a secure practice.
// It returns 0 if the credentials are invalid,
// 1 if valid user, and
// 2 if valid administrator
int Security::validate(string username, string password)
{
	if ((username=="abbott") && (password=="monday")) return 1;
	if ((username=="costello") && (password=="tuesday")) return 2;
return 0;
}
