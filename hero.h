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
	Hero setHero(Armor armor, Weapon weapon, Shield shield);
	void getHero(Hero hero);
	int Fight(Hero hero, Enemy enemy);
private:
	string name;
	int strenght;
	int hp;
	Armor armor;
	Weapon weapon;
	Shield shield;
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

hero InitHero(string a, int b, int c);
hero InputHero(armor* b, weapon* c, shield* d);
void OutputHero(hero b);//функция вывода переменной
int Fight(hero a, enemy b);*/