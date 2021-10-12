#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Enemy
{
public:
	Enemy initializeEnemy(string name, int damage, int hp);// Инициализация
	Enemy inputEnemy(); // Ввод
	void outputEnemy(Enemy enemy); // Вывод
	int getDamage(Enemy enemy); // Получение damage
	int getHP(Enemy enemy); // Получение hp
private:
	string name;
	int damage;
	int hp;
};

