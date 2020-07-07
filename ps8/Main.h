#include<iostream>
#include<string>

int main(int argc, char *argv[])
{
	Security x;
	cout<<x.validate("salih","123");
	cout<<x.Administrator.Login("salih","123");
	cout<<x.Administrator.User.Login("salih","123");
	return 0;
}
