#include "armor.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

armor AddArmor(string a, int b, int c) //Инициализация брони
{
	armor ar;
	ar.name = a;
	ar.protection = b;
	ar.type = c;
	return ar;
}
armor InputArmor() // Ввод брони
{
	armor a = {};
	cout << "Выберите название брони: " << endl;
	cin >> a.name;
	cout << "Введите защиту брони: " << endl;
	cin >> a.protection;
	cout << "Введите тип брони: " << endl;
	cin >> a.type;
	return a;
}
void OutputArmor(armor b) // Вывод брони
{
	cout << "Название: ";
	cout << b.name << endl;
	cout << "Защита: ";
	cout << b.protection << endl;
	cout << "Тип: ";
	cout << b.type << endl;
}