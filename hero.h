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
} hero;
hero AddHero(string a, int b, int c);
hero InputHero();
void OutputHero(hero b);/*функция вывода переменной*/
int Fight(hero a, enemy b, weapon c, shield d, armor e);