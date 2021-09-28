#include "enemy.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

enemy AddEnemy(string a, int b, int c) //Инициализация врага
{
	enemy e;
	e.name = a;
	e.damage = b;
	e.hp = c;
	return e;
}
enemy InputEnemy() // Ввод врага
{
	enemy a = {};
	cout << "Выберите имя врага: " << endl;
	cin >> a.name;
	cout << "Введите урон врага: " << endl;
	cin >> a.damage;
	cout << "Введите хп врага: " << endl;
	cin >> a.hp;
	return a;
}
void OutputEnemy(enemy b) // Вывод врага
{
	cout << "Имя: ";
	cout << b.name << endl;
	cout << "Урон: ";
	cout << b.damage << endl;
	cout << "Хп: ";
	cout << b.hp << endl;
}