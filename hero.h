#pragma once
#include <string>
#include <windows.h>
#include "enemy.h"
#include "armor.h"
#include "shield.h"
#include "weapon.h"
using namespace std;

typedef struct
{
	string name;
	int strength;
	int hp;
	armor my_armor;
	weapon my_weapon;
	shield my_shield;
} hero;
hero AddHero(string a, int b, int c);
hero InputHero(armor* b, weapon* c, shield* d);
void OutputHero(hero b);/*функция вывода переменной*/
int Fight(hero a, enemy b);