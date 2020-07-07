#include"Cyberdemon.h"
Cyberdemons::Cyberdemons(){
	set_type(1);
	set_strength(10);
	set_hitpoints(10);
}
Cyberdemons::Cyberdemons(int newType, int newStrength, int newHit){
	set_type(newType);
	set_strength(newStrength);
}
int Cyberdemons:: getDamage(){
	int damage;
	int change=rand() % 100;
	// All creatures inflict damage which is a
	// random number up to their strength
	damage = (rand() % get_strength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!"
	      << endl;
	// Demons can inflict damage of 50 with a 5% chance
	if ((get_type()== 2) || (get_type()== 1)){
		if(change<5);
			damage+=50;
		cout<<"Demonic attack inflict 50"<<
			"additional damage point!"<<endl;
	}
	// Elves inflict double magical damage with a 10% chance
	if (get_type()== 3) {
		if(change<10);
			damage*=2;
	}
	// Balrogs are so fast they get to attack twice
	if (get_type()== 2) {
		int damage2=(rand()% get_strength())+1;
		cout<<"Balrog speed atack inflicts"<< damage2
			<<"additional damage points!"<<endl;
		damage=damage+damage2;
	}
	return damage;

}
string	Cyberdemons::getSpecies(){
	return "Cyberdemons";
}

