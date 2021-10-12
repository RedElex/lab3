#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Weapon
{
public:
	Weapon initializeWeapon(string name, int damage, int type); // Инициализацция
	Weapon inputWeapon(); // Ввод
	void outputWeapon(Weapon weapon); // Вывод
	int getDamage(Weapon weapon); // Получение damage
private:
	string name;
	int damage;
	int type;
};


