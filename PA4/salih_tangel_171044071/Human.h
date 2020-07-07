#ifndef HUMAN_H
#define HUMAN_H
#include"Creature.h"
class Human: public Creature
{
	public:
	Human();
	Human(int newType, int newStrength, int newHit);
	int getDamage();
	string	getSpecies();// a helper function which returns the creature type
};
#endif
