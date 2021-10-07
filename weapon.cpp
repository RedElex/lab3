#include "weapon.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Weapon Weapon::initializeWeapon(string name, int damage, int type)
{
	Weapon weapon;
	weapon.name = name;
	weapon.damage = damage;
	weapon.type = type;
	return weapon;

}
Weapon Weapon::setWeapon()
{
	Weapon weapon = {};
	cout << "Выберите название оружия: " << endl;
	cin >> weapon.name;
	cout << "Введите урон оружия: " << endl;
	cin >> weapon.damage;
	do
	{
		cout << "Введите тип меча(номер ответа)\n1) Меч\n2) Топор\n3) Копьё" << endl;
		cin >> weapon.type;
	} while (weapon.type < 1 || weapon.type>3);
	return weapon;
}
void Weapon::getWeapon(Weapon weapon)
{
	cout << "Название: ";
	cout << weapon.name << endl;
	cout << "Урон: ";
	cout << weapon.damage << endl;
	switch (weapon.type)
	{
	case 1:
	{
		cout << "Тип: Меч\n";
		break;
	}
	case 2:
	{
		cout << "Тип: Топор\n";
		break;
	}
	case 3:
		cout << "Тип: Копьё\n";
		break;
	}

}

/*
weapon InitWeapon(string a, int b, int c) //Инициализация оружия
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
	cout << "Введите урон оружия: " << endl;
	cin >> a.damage;
	do
	{
		cout << "Введите тип меча(номер ответа)\n1) Меч\n2) Топор\n3) Копьё" << endl;
		cin >> a.type;
	} while (a.type<1||a.type>3);
	return a;
}
void OutputWeapon(weapon b) // Вывод оружия
{
	cout << "Название: ";
	cout << b.name << endl;
	cout << "Урон: ";
	cout << b.damage << endl;
	switch (b.type)
	{
		case 1:
		{
			cout << "Тип: Меч\n";
			break;
		}
		case 2:
		{
			cout << "Тип: Топор\n";
			break;
		}
		case 3:
			cout << "Тип: Копьё\n";
			break;
	}
}*/