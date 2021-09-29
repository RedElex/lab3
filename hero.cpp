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

hero AddHero(string a, int b, int c) //Инициализируем героя
{
	hero h;
	h.name = a;
	h.strength = b;
	h.hp = c;
	return h;
}
hero InputHero() // Ввод переменной
{
	hero a = {};
	cout << "Выберите имя героя: " << endl;
	cin >> a.name;
	cout << "Введите силу героя: " << endl;
	cin >> a.strength;
	cout << "Введите хп героя: " << endl;
	cin >> a.hp;
	return a;
}
void OutputHero(hero b)/*функция вывода переменной*/
{
	cout << "Имя: ";
	cout << b.name << endl;
	cout << "Сила: ";
	cout << b.strength << endl;
	cout << "Хп: ";
	cout << b.hp << endl;
}
int Fight(hero a, enemy b, weapon c, shield d, armor e) // Функция сражения
{
	int result;
	int loss = b.damage - d.protection - e.protection;
	int attack = a.strength * c.damage;
	int hp_hero = a.hp;
	int hp_enemy = b.hp;
	do
	{
		if (loss > 0)
			hp_hero = hp_hero - loss;
		hp_enemy = hp_enemy - attack;
	} while (hp_hero>0&&hp_enemy>0);
	if (hp_hero < 1)//победа врага
		result = 1;
	if (hp_enemy < 1)//победа героя
		result = 2;
	if (hp_hero < 1 && hp_enemy < 1)//ничья
		result = 0;
	return result;
}