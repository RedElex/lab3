#pragma once
#include <string>
#include <windows.h>
#include "enemy.h"
#include "armor.h"
#include "shield.h"
#include "weapon.h"
using namespace std;

class Hero
{
public:
	Hero initializeHero(string name, int strenght, int hp);
	Hero inputHero(Armor armor, Weapon weapon, Shield shield);
	void outputHero(Hero hero);
	int Fight(Hero hero, Enemy enemy);
private:
	string name;
	int strength;
	int hp;
	Armor armor;
	Weapon weapon;
	Shield shield;
};
