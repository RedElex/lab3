#include "shield.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <windows.h>

using namespace std;

Shield Shield::initializeShield(string name, int protection, int type)
{
	Shield shield;
	shield.name = name;
	shield.protection = protection;
	shield.type = type;
	return shield;
}

Shield Shield::setShield()
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

void Shield::getShield(Shield shield)
{
	cout << "��������: ";
	cout << shield.name << endl;
	cout << "������: ";
	cout << shield.protection << endl;
	cout << "���: ";
	cout << shield.type << endl;

}
int Shield::getProtectionShield(Shield shield)
{
	int protection = shield.protection;
	return protection;
}
/*
shield InitShield(string a, int b, int c) //������������� ����
{
	shield s;
	s.name = a;
	s.protection = b;
	s.type = c;
	return s;
}
shield InputShield() // ���� ����
{
	shield a = {};
	cout << "�������� �������� ����: " << endl;
	cin >> a.name;
	cout << "������� ������ ����: " << endl;
	cin >> a.protection;
	cout << "������� ��� ����: " << endl;
	cin >> a.type;
	return a;
}
void OutputShield(shield b) // ����� ����
{
	cout << "��������: ";
	cout << b.name << endl;
	cout << "������: ";
	cout << b.protection << endl;
	cout << "���: ";
	cout << b.type << endl;
}*/