#include "weapon.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Weapon Weapon::initializeWeapon(string name, int damage, int type)
{
	Weapon weapon;
	weapon.name = name;
	weapon.damage = damage;
	weapon.type = type;
	return weapon;

}
Weapon Weapon::inputWeapon()
{
	Weapon weapon = {};
	cout << "�������� �������� ������: " << endl;
	cin >> weapon.name;
	cout << "������� ���� ������: " << endl;
	cin >> weapon.damage;
	do
	{
		cout << "������� ��� ����(����� ������)\n1) ���\n2) �����\n3) �����" << endl;
		cin >> weapon.type;
	} while (weapon.type < 1 || weapon.type>3);
	return weapon;
}
void Weapon::outputWeapon(Weapon weapon)
{
	cout << "��������: ";
	cout << weapon.name << endl;
	cout << "����: ";
	cout << weapon.damage << endl;
	switch (weapon.type)
	{
	case 1:
	{
		cout << "���: ���\n";
		break;
	}
	case 2:
	{
		cout << "���: �����\n";
		break;
	}
	case 3:
		cout << "���: �����\n";
		break;
	}

}
int Weapon::getDamage(Weapon weapon)
{
	int damage = weapon.damage;
	return damage;
}

