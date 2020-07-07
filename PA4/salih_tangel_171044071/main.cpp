// C++ program to demonstrate implementation
// of Inheritance
#include"Balrogs.h"
#include"Cyberdemon.h"
#include"Deamons.h"
#include"Human.h"
#include"Elf.h"
#include"Creature.h"
//constructor eksigin var constructor tanimlayinca bi anda duzeldi
//human et damage neden duzgun calismiyor?
using namespace std;
int main() {
	//i give basically 10 strength and 10 hitpoints
	Creature a(0,10,10);//HUMAN
	std::cout<<a.getSpecies()<<endl;
	std::cout<<a.getDamage();	//Error idknow
	Human a_1;
	std::cout<<a_1.getDamage()<<endl;

	Creature b(1,10,10);//CYBERDEMON
	std::cout<<b.getSpecies()<<endl;
	std::cout<<b.getDamage()<<endl;
	Deamons b_1;
	std::cout<<b_1.getDamage()<<endl;
	Cyberdemons b_2;
	std::cout<<b_2.getDamage()<<endl;

	Creature c(2,10,10);//BALROGS
	std::cout<<c.getSpecies()<<endl;
	std::cout<<c.getDamage()<<endl;
	Deamons c_1;
	std::cout<<c_1.getDamage()<<endl;
	Balrogs c_2;
	std::cout<<c_2.getDamage()<<endl;

	Creature d(3,10,10);//ELFS
	std::cout<<d.getSpecies()<<endl;
	std::cout<<d.getDamage()<<endl;
	Elfs d_1;
	std::cout<<d_1.getDamage()<<endl;

	return 0;
}

