#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Enemy
{
public:
	Enemy initializeEnemy(string name, int damage, int hp);
	Enemy setEnemy();
	void getEnemy(Enemy enemy);
private:
	string name;
	int damage;
	int hp;
};


/*
typedef struct
{
	string name;
	int damage;
	int hp;
} enemy;
enemy InitEnemy(string a, int b, int c); //Инициализация врага
enemy InputEnemy(); // Ввод врага
void OutputEnemy(enemy b); // Вывод врага
*/