#ifndef ELF_H
#define ELF_H
#include"Creature.h"
class Elfs : public Creature{
    public:
	Elfs();
	Elfs(int newType, int newStrength, int newHit);
	int getDamage();
	string	getSpecies();// a helper function which returns the creature type
};

#endif
