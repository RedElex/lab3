#include "armor.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Armor Armor::initializeArmor(string name, int protection, int type) // �������������
{
	Armor armor;
	armor.name = name;
	armor.protection = protection;
	armor.type = type;
	return armor;
}

Armor Armor::inputArmor() // ����
{
	Armor armor = {};
	cout << "�������� �������� �����: " << endl;
	cin >> armor.name;
	cout << "������� ������ �����: " << endl;
	cin >> armor.protection;
	cout << "������� ��� �����: " << endl;
	cin >> armor.type;
	return armor;

}

void Armor::outputArmor(Armor armor) // �����
{
	cout << "��������: ";
	cout << armor.name << endl;
	cout << "������: ";
	cout << armor.protection << endl;
	cout << "���: ";
	cout << armor.type << endl;

}

int Armor::getProtectionArmor(Armor armor) // ��������� protection
{
	int protection = armor.protection;
	return protection;
}
