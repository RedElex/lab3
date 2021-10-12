#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Weapon
{
public:
	Weapon initializeWeapon(string name, int damage, int type);
	Weapon inputWeapon();
	void outputWeapon(Weapon weapon);
	int getDamage(Weapon weapon);
private:
	string name;
	int damage;
	int type;
};


