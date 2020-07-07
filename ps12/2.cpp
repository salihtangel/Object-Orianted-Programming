#include<iostream>
using namespace std;

int getProductID(int ids[], string names[], int numProducts, string target)
{
	for (int i = 0; i < numProducts; i++) {
		if (names[i] == target)//target de bi string ama demekki hepsini karsilastiriyo
		{
			if(ids[i]==-1)
				cout<<"id is -1 no problem"<<endl;
		return ids[i];
		}
	}
	return -1;  // Not found
}
int main()  // Sample code to test the getProductID function
{
	int productIds[] = {4, 5, 8, 10, 13,-1};
	string products[] = {"computer", "flash drive", "mouse", "printer",
			     "camera","laptop"};
	cout << getProductID(productIds, products, 6, "mouse") << endl;
	cout << getProductID(productIds, products, 6, "camera") << endl;
	cout << getProductID(productIds, products, 6, "laptop") << endl;
	return 0;
}
