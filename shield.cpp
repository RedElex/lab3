#include "shield.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

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
}