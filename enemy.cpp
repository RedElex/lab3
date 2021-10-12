#include "enemy.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Enemy Enemy::initializeEnemy(string name, int damage, int hp) // Инициализация
{
	Enemy enemy;
	enemy.name = name;
	enemy.damage = damage;
	enemy.hp = hp;
	return enemy;
}

Enemy Enemy::inputEnemy() // Ввод
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

void Enemy::outputEnemy(Enemy enemy) // Вывод
{
	cout << "Имя: ";
	cout << enemy.name << endl;
	cout << "Урон: ";
	cout << enemy.damage << endl;
	cout << "Хп: ";
	cout << enemy.hp << endl;

}

int Enemy::getDamage(Enemy enemy) // получение damage
{
	int damage = enemy.damage;
	return damage;
}
int Enemy::getHP(Enemy enemy) // получение hp
{
	int hp = enemy.hp;
	return hp;
}
