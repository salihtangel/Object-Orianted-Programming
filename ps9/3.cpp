#include <iostream>
using namespace std;
// tek parameterli olucak
class third {
    public:
	third() {
		fun(5, 9);//control from here
		cout << t;
	}
	int fun(int n, int m);
	char *get_t() { return t; }

    private:
	char t[20] = "0123456789";
	int temp;
	int i;
	int j;
};
int third::fun(int n, int m) {

	i = n;
	j = m;  // counting the length
	while (i < j)		 // for reversing t
	{
		temp = t[i];
		t[i] = t[j];
		t[j] = temp;
		i++;
		j--;
	}
}
int main(int argc, char *argv[]) {
	third x;
	cout << *x.get_t();
	return 0;
}
