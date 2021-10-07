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
Weapon Weapon::setWeapon()
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
void Weapon::getWeapon(Weapon weapon)
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

/*
weapon InitWeapon(string a, int b, int c) //������������� ������
{
	weapon w;
	w.name = a;
	w.damage = b;
	w.type= c;
	return w;
}
weapon InputWeapon() // ���� ������
{
	weapon a = {};
	cout << "�������� �������� ������: " << endl;
	cin >> a.name;
	cout << "������� ���� ������: " << endl;
	cin >> a.damage;
	do
	{
		cout << "������� ��� ����(����� ������)\n1) ���\n2) �����\n3) �����" << endl;
		cin >> a.type;
	} while (a.type<1||a.type>3);
	return a;
}
void OutputWeapon(weapon b) // ����� ������
{
	cout << "��������: ";
	cout << b.name << endl;
	cout << "����: ";
	cout << b.damage << endl;
	switch (b.type)
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
}*/