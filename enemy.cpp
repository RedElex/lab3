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
/*
enemy InitEnemy(string a, int b, int c) //������������� �����
{
	enemy e;
	e.name = a;
	e.damage = b;
	e.hp = c;
	return e;
}
enemy InputEnemy() // ���� �����
{
	enemy a = {};
	cout << "�������� ��� �����: " << endl;
	cin >> a.name;
	cout << "������� ���� �����: " << endl;
	cin >> a.damage;
	cout << "������� �� �����: " << endl;
	cin >> a.hp;
	return a;
}
void OutputEnemy(enemy b) // ����� �����
{
	cout << "���: ";
	cout << b.name << endl;
	cout << "����: ";
	cout << b.damage << endl;
	cout << "��: ";
	cout << b.hp << endl;
}
*/