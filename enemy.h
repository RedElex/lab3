#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Enemy
{
public:
	Enemy initializeEnemy(string name, int damage, int hp);// �������������
	Enemy inputEnemy(); // ����
	void outputEnemy(Enemy enemy); // �����
	int getDamage(Enemy enemy); // ��������� damage
	int getHP(Enemy enemy); // ��������� hp
private:
	string name;
	int damage;
	int hp;
};

