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
	Hero initializeHero(string name, int strenght, int hp); // Инициализация
	Hero inputHero(Armor armor, Weapon weapon, Shield shield); // Ввод
	void outputHero(Hero hero); // Вывод
	int Fight(Hero hero, Enemy enemy); // Вычисление
private:
	string name;
	int strength;
	int hp;
	Armor armor;
	Weapon weapon;
	Shield shield;
};
