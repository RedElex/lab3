#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Armor
{
public:
	Armor initializeArmor(string name, int protection, int type); // �������������
	Armor inputArmor(); // ����
	void outputArmor(Armor armor); // �����
	int getProtectionArmor(Armor armor); // ��������� protection
private:
	string name;
	int protection;
	int type;
};


