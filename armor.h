#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Armor
{
public:
	Armor initializeArmor(string name, int protection, int type);
	Armor setArmor();
	void getArmor(Armor armor);
private:
	string name;
	int protection;
	int type;
};


/*
typedef struct
{
	string name;
	int protection;
	int type;
} armor;

armor InitArmor(string a, int b, int c); // ������������� �����
armor InputArmor(); // ���� �����
void OutputArmor(armor b); // ����� �����
*/