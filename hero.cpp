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

/*
hero InitHero(string a, int b, int c) //�������������� �����
{
	hero h;
	h.my_armor = {};
	h.my_shield = {};
	h.my_weapon = {};
	h.name = a;
	h.strength = b;
	h.hp = c;
	return h;
}
hero InputHero(armor* b, weapon* c, shield* d) // ���� ����������
{
	hero a = {};
	a.my_armor = *b;
	a.my_weapon = *c;
	a.my_shield = *d;
	cout << "�������� ��� �����: " << endl;
	cin >> a.name;
	cout << "������� ���� �����: " << endl;
	cin >> a.strength;
	cout << "������� �� �����: " << endl;
	cin >> a.hp;
	return a;
}
void OutputHero(hero b)
{
	cout << "���: ";
	cout << b.name << endl;
	cout << "����: ";
	cout << b.strength << endl;
	cout << "��: ";
	cout << b.hp << endl;
	cout << "������: ";
	cout << b.my_armor.protection+b.my_shield.protection << endl;
}
int Fight(hero a, enemy b) // ������� ��������
{
	int result;
	int loss = b.damage - a.my_armor.protection - a.my_shield.protection;
	int attack = a.strength * a.my_weapon.damage;
	int hp_hero = a.hp;
	int hp_enemy = b.hp;
	do
	{
		if (loss > 0)
			hp_hero = hp_hero - loss;
		hp_enemy = hp_enemy - attack;
	} while (hp_hero>0&&hp_enemy>0);
	if (hp_hero < 1)//������ �����
		result = 1;
	if (hp_enemy < 1)//������ �����
		result = 2;
	if (hp_hero < 1 && hp_enemy < 1)//�����
		result = 0;
	return result;
}
*/