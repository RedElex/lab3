#pragma once
#include <string>
#include <windows.h>

using namespace std;
typedef struct
{
	string name;
	int strength;
	int hp;
} hero;
hero AddHero(string a, int b, int c);
hero InputHero();
void OutputHero(hero b);/*функция вывода переменной*/