#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include"Creature.h"
class Cyberdemons : public Creature{
    public:
	Cyberdemons();
	Cyberdemons(int newType, int newStrength, int newHit);
	int getDamage();
	string	getSpecies();// a helper function which returns the creature type
};

#endif
