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
	cout << "�������� ��� �����: " << endl;
	cin >> enemy.name;
	cout << "������� ���� �����: " << endl;
	cin >> enemy.damage;
	cout << "������� �� �����: " << endl;
	cin >> enemy.hp;
	return enemy;

}

void Enemy::outputEnemy(Enemy enemy)
{
	cout << "���: ";
	cout << enemy.name << endl;
	cout << "����: ";
	cout << enemy.damage << endl;
	cout << "��: ";
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
