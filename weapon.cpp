#include "weapon.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

weapon AddWeapon(string a, int b, int c) //Инициализация оружия
{
	weapon w;
	w.name = a;
	w.damage = b;
	w.type= c;
	return w;
}
weapon InputWeapon() // Ввод оружия
{
	weapon a = {};
	cout << "Выберите название оружия: " << endl;
	cin >> a.name;
	cout << "Введите урон врага: " << endl;
	cin >> a.damage;
	cout << "Введите хп врага: " << endl;
	cin >> a.type;
	return a;
}
void OutputWeapon(weapon b) // Вывод оружия
{
	cout << "Название: ";
	cout << b.name << endl;
	cout << "Урон: ";
	cout << b.damage << endl;
	cout << "Тип: ";
	cout << b.type << endl;
}