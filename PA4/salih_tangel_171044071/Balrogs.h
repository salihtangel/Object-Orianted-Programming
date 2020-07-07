#ifndef BALROGS_H
#define BALROGS_H
#include"Deamons.h"
class Balrogs: public Deamons
{
	public:
	Balrogs();
	Balrogs(int newType, int newStrength, int newHit);
	int getDamage();
	string	getSpecies();// a helper function which returns the creature type
};
#endif
