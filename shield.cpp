#include "shield.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Shield Shield::initializeShield(string name, int protection, int type) // �������������
{
	Shield shield;
	shield.name = name;
	shield.protection = protection;
	shield.type = type;
	return shield;
}

Shield Shield::inputShield() // ����
{
	Shield shield = {};
	cout << "�������� �������� ����: " << endl;
	cin >> shield.name;
	cout << "������� ������ ����: " << endl;
	cin >> shield.protection;
	cout << "������� ��� ����: " << endl;
	cin >> shield.type;
	return shield;
}

void Shield::outputShield(Shield shield) // �����
{
	cout << "��������: ";
	cout << shield.name << endl;
	cout << "������: ";
	cout << shield.protection << endl;
	cout << "���: ";
	cout << shield.type << endl;

}
int Shield::getProtectionShield(Shield shield) // ��������� protection
{
	int protection = shield.protection;
	return protection;
}
