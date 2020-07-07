#include<iostream>
using namespace std;
#if 0
The play function takes as input two Player objects. Define the Player class with a virtual
function named getGuess( ) . The implementation of Player :: getGuess( ) can simply return 0.
#endif
#if 0
Finally, construct a main function that invokes play(Player &player1, Player
&player2) with two instances of a HumanPlayer (human versus human), an instance of a
HumanPlayer and ComputerPlayer (human versus computer), and two instances of
ComputerPlayer (computer versus computer).
#endif
class Player{
	public:
		virtual	int  getGuess(){return 0;}
};
class HumanPlayer :public Player{
	public:
		int getGuess();
	private:
		int number;
};
class ComputerPlayer:public Player{
	public:
		int getGuess();
	private:
		int number;
};
int HumanPlayer::getGuess(){
	cin>>number;
	return number;
}
int ComputerPlayer::getGuess(){
	return rand()%100;
}
bool checkForWin(int guess, int answer) {
	if (answer == guess) {
		cout << "You're right! You win!" << endl;
		return true;
	} else if (answer < guess)
		cout << "Your guess is too high." << endl;
	else
		cout << "Your guess is too low." << endl;
	return false;
}
void play(Player &player1, Player &player2) {
	int answer = 0, guess = 0;
	answer = rand() % 100;
	bool win = false;
	while (!win) {
		cout << "Player 1's turn to guess." << endl;
		guess = player1.getGuess();
		win = checkForWin(guess, answer);
		if (win) return;
		cout << "Player 2's turn to guess." << endl;
		guess = player2.getGuess();
		win = checkForWin(guess, answer);
	}
}
int main(int argc, char *argv[])
{
	HumanPlayer y;
	HumanPlayer z;
	ComputerPlayer t;
	ComputerPlayer k;
	//play(y,z);//HUMAN HUMAN
	//play(y,t);//HUMAN COMPUTER
	play(t,k);//COMPUTER COMPUTER
	return 0;
}
