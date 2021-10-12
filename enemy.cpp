#include "enemy.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Enemy Enemy::initializeEnemy(string name, int damage, int hp)
{
	Enemy enemy;
	enemy.name = name;
	enemy.damage = damage;
	enemy.hp = hp;
	return enemy;
}

Enemy Enemy::inputEnemy()
{
	Enemy enemy = {};
	cout << "Выберите имя врага: " << endl;
	cin >> enemy.name;
	cout << "Введите урон врага: " << endl;
	cin >> enemy.damage;
	cout << "Введите хп врага: " << endl;
	cin >> enemy.hp;
	return enemy;

}

void Enemy::outputEnemy(Enemy enemy)
{
	cout << "Имя: ";
	cout << enemy.name << endl;
	cout << "Урон: ";
	cout << enemy.damage << endl;
	cout << "Хп: ";
	cout << enemy.hp << endl;

}

int Enemy::getDamage(Enemy enemy)
{
	int damage = enemy.damage;
	return damage;
}
int Enemy::getHP(Enemy enemy)
{
	int hp = enemy.hp;
	return hp;
}
/*
enemy InitEnemy(string a, int b, int c) //Инициализация врага
{
	enemy e;
	e.name = a;
	e.damage = b;
	e.hp = c;
	return e;
}
enemy InputEnemy() // Ввод врага
{
	enemy a = {};
	cout << "Выберите имя врага: " << endl;
	cin >> a.name;
	cout << "Введите урон врага: " << endl;
	cin >> a.damage;
	cout << "Введите хп врага: " << endl;
	cin >> a.hp;
	return a;
}
void OutputEnemy(enemy b) // Вывод врага
{
	cout << "Имя: ";
	cout << b.name << endl;
	cout << "Урон: ";
	cout << b.damage << endl;
	cout << "Хп: ";
	cout << b.hp << endl;
}
*/