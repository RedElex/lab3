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
	hero initializeHero(string name, int strenght, int hp);
	hero inputHero(Armor armor, Weapon weapon, Shield shield);
	void outputHero(Hero hero);
	int Fight(Hero hero, Enemy enemy);
private:
	string name_;
	int strenght;
	int hp;
};
/*
typedef struct
{
	string name;
	int strength;
	int hp;
	armor my_armor;
	weapon my_weapon;
	shield my_shield;
} hero;
*/
hero InitHero(string a, int b, int c);
hero InputHero(armor* b, weapon* c, shield* d);
void OutputHero(hero b);//������� ������ ����������
int Fight(hero a, enemy b);