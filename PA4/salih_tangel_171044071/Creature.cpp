#include"Creature.h"

Creature :: Creature():strength(10),hitpoints(10),type(0){
}
Creature :: Creature(int newType, int newStrength, int newHit){
	type=newType;
	strength=newType;
	hitpoints=newHit;
}
	int Creature:: get_type()const{return type;}
	int Creature:: get_strength()const {return strength;}
	int Creature:: get_hitpoints()const {return hitpoints;}
	void Creature :: set_type(int one){ type=one;}
	void Creature :: set_strength(int one){ strength=one;}
	void Creature :: set_hitpoints(int one){ hitpoints=one;}
int Creature :: getDamage(){
	int damage;
	int change=rand() % 100;
	// All creatures inflict damage which is a
	// random number up to their strength
	damage = (rand() % strength) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!"
	      << endl;
	// Demons can inflict damage of 50 with a 5% chance
	if ((type = 2) || (type == 1)){
		if(change<5);
			damage+=50;
		cout<<"Demonic attack inflict 50"<<
			"additional damage point!"<<endl;
	}
	// Elves inflict double magical damage with a 10% chance
	if (type == 3) {
		if(change<10);
			damage*=2;
	}
	// Balrogs are so fast they get to attack twice
	if (type == 2) {
		int damage2=(rand()% strength)+1;
		cout<<"Balrog speed atack inflicts"<< damage2
			<<"additional damage points!"<<endl;
		damage=damage+damage2;
	}
	return damage;
}
string Creature :: getSpecies(){
	return "Human";
}
