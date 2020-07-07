#ifndef DEAMONS_H
#define DEAMONS_H
#include"Creature.h"
class Deamons : public Creature{
    public:
	Deamons();
	Deamons(int newType, int newStrength, int newHit);
	int getDamage();
	string	getSpecies();// a helper function which returns the creature type
};

#endif
