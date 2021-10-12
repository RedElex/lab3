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


/*
typedef struct
{
	string name;
	int damage;
	int type;
} weapon;

weapon InitWeapon(string a, int b, int c); // Инициализация оружия
weapon InputWeapon(); // Ввод оружия
void OutputWeapon(weapon b); // Вывод оружия
*/