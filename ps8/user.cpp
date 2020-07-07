namespace Authenticate
{
void inputUserName( )
{
do
{
cout << "Enter your username (8 letters only)" << endl;
cin >> username;
} while (!isValid( ));
}
string getUserName( )
{
return username;
}
}
