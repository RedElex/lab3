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

Shield Shield::setShield()
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

void Shield::getShield(Shield shield)
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
/*
shield InitShield(string a, int b, int c) //Инициализация щита
{
	shield s;
	s.name = a;
	s.protection = b;
	s.type = c;
	return s;
}
shield InputShield() // Ввод щита
{
	shield a = {};
	cout << "Выберите название щита: " << endl;
	cin >> a.name;
	cout << "Введите защиту щита: " << endl;
	cin >> a.protection;
	cout << "Введите тип щита: " << endl;
	cin >> a.type;
	return a;
}
void OutputShield(shield b) // Вывод щита
{
	cout << "Название: ";
	cout << b.name << endl;
	cout << "Защита: ";
	cout << b.protection << endl;
	cout << "Тип: ";
	cout << b.type << endl;
}*/