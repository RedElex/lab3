#include "armor.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Armor Armor::initializeArmor(string name, int protection, int type)
{
	Armor armor;
	armor.name = name;
	armor.protection = protection;
	armor.type = type;
	return armor;
}

Armor Armor::inputArmor()
{
	Armor armor = {};
	cout << "Выберите название брони: " << endl;
	cin >> armor.name;
	cout << "Введите защиту брони: " << endl;
	cin >> armor.protection;
	cout << "Введите тип брони: " << endl;
	cin >> armor.type;
	return armor;

}

void Armor::outputArmor(Armor armor)
{
	cout << "Название: ";
	cout << armor.name << endl;
	cout << "Защита: ";
	cout << armor.protection << endl;
	cout << "Тип: ";
	cout << armor.type << endl;

}

int Armor::getProtectionArmor(Armor armor)
{
	int protection = armor.protection;
	return protection;
}
/*
armor InitArmor(string a, int b, int c) //Инициализация брони
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
*/