#include "shield.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Shield Shield::initializeShield(string name, int protection, int type)
{
	Shield shield;
	shield.name = name;
	shield.protection = protection;
	shield.type = type;
	return shield;
}

Shield Shield::inputShield()
{
	Shield shield = {};
	cout << "Выберите название щита: " << endl;
	cin >> shield.name;
	cout << "Введите защиту щита: " << endl;
	cin >> shield.protection;
	cout << "Введите тип щита: " << endl;
	cin >> shield.type;
	return shield;
}

void Shield::outputShield(Shield shield)
{
	cout << "Название: ";
	cout << shield.name << endl;
	cout << "Защита: ";
	cout << shield.protection << endl;
	cout << "Тип: ";
	cout << shield.type << endl;

}
int Shield::getProtectionShield(Shield shield)
{
	int protection = shield.protection;
	return protection;
}
