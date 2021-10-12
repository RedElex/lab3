#include "enemy.h"
#include "weapon.h"
#include "armor.h"
#include "shield.h"
#include "hero.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Hero Hero::initializeHero(string name, int strength, int hp)
{
	Hero hero;
	hero.armor = {};
	hero.shield = {};
	hero.weapon = {};
	hero.name = name;
	hero.strength = strength;
	hero.hp = hp;
	return hero;

}

Hero Hero::inputHero(Armor armor, Weapon weapon, Shield shield)
{
	Hero hero = {};
	hero.armor = armor;
	hero.weapon = weapon;
	hero.shield = shield;
	cout << "�������� ��� �����: " << endl;
	cin >> hero.name;
	cout << "������� ���� �����: " << endl;
	cin >> hero.strength;
	cout << "������� �� �����: " << endl;
	cin >> hero.hp;
	return hero;
}

void Hero::outputHero(Hero hero)
{
	cout << "���: ";
	cout << hero.name << endl;
	cout << "����: ";
	cout << hero.strength << endl;
	cout << "��: ";
	cout << hero.hp << endl;
}

int Hero::Fight(Hero hero, Enemy enemy)
{
		int result;
		int loss = enemy.getDamage(enemy) - hero.shield.getProtectionShield(hero.shield) - hero.armor.getProtectionArmor(hero.armor);
		int attack = hero.strength * hero.weapon.getDamage(hero.weapon);
		int hp_hero = hero.hp;
		int hp_enemy = enemy.getHP(enemy);
		do
		{
			if (loss > 0)
				hp_hero = hp_hero - loss;
			hp_enemy = hp_enemy - attack;
		} while (hp_hero > 0 && hp_enemy > 0);
		if (hp_hero < 1)//������ �����
			result = 1;
		if (hp_enemy < 1)//������ �����
			result = 2;
		if (hp_hero < 1 && hp_enemy < 1)//�����
			result = 0;
		return result;
}
