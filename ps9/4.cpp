#include <iostream>
using namespace std;

// tower of HANOI function implementation
// i get help a bit from internet to solve this algortihm
// it has tree steps
// Move the top N-1 disks from peg A to peg B (using C as an auxiliarypeg)
// Move the bottom disk from peg A to peg C
//Move N-1 disks from Peg B to Peg C (using Peg A as an auxiliary peg)


void tower_of_honai(int n, char Sour, char Aux, char Des) {
	if (n == 1) {
		cout << "Move Disk " << n << " from " << Sour << " to " << Des
		     << endl;
		return;
	}

	tower_of_honai(n - 1, Sour, Des, Aux);//After finished it it will come back from n from reverse
	cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
	tower_of_honai(n - 1, Aux, Sour, Des);
}

// main program
int main() {
	int n;

	cout << "Enter no. of disks:";
	cin >> n;
	// calling the tower_of_honai
	tower_of_honai(n, 'A', 'B', 'C');

	return 0;
}
