#include "armor.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Armor Armor::initializeArmor(string name, int protection, int type)
{
	Armor armor;
	armor.name = name;
	armor.protection = protection;
	armor.type = type;
	return armor;
}

Armor Armor::inputArmor()
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

void Armor::outputArmor(Armor armor)
{
	cout << "��������: ";
	cout << armor.name << endl;
	cout << "������: ";
	cout << armor.protection << endl;
	cout << "���: ";
	cout << armor.type << endl;

}

int Armor::getProtectionArmor(Armor armor)
{
	int protection = armor.protection;
	return protection;
}
/*
armor InitArmor(string a, int b, int c) //������������� �����
{
	armor ar;
	ar.name = a;
	ar.protection = b;
	ar.type = c;
	return ar;
}
armor InputArmor() // ���� �����
{
	armor a = {};
	cout << "�������� �������� �����: " << endl;
	cin >> a.name;
	cout << "������� ������ �����: " << endl;
	cin >> a.protection;
	cout << "������� ��� �����: " << endl;
	cin >> a.type;
	return a;
}
void OutputArmor(armor b) // ����� �����
{
	cout << "��������: ";
	cout << b.name << endl;
	cout << "������: ";
	cout << b.protection << endl;
	cout << "���: ";
	cout << b.type << endl;
}
*/