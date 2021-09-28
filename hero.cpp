#define _CRT_SECURE_NO_WARNINGS
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
hero InputHero()
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