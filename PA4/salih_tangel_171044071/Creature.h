#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<string>
using namespace std;
class Creature{
public:
	string	getSpecies();// a helper function which returns the creature type
	Creature();
	// Initialize to human, 10 strength, 10 hit points
	Creature(int newType, int newStrength, int newHit);
	// Also add appropriate accessor and mutator functions
	int get_type()const;
	int get_strength()const;
	int get_hitpoints()const;
	void set_type(const int newType);
	void set_strength(const int newStrength);
	void set_hitpoints(const int hitpoints);
		// for type, strength, and hit points
	int getDamage();
	// Returns amount of damage this creature
	// inflicts in one round of combat
	private:
	int type;
	int strength;
	int hitpoints;
};
#endif
