#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Shield
{
public:
	Shield initializeShield(string name, int protection, int type);
	Shield setShield();
	void getShield(Shield shield);
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
} shield;

shield InitShield(string a, int b, int c); // Инициализация щита
shield InputShield(); // Ввод щита
void OutputShield (shield b); // Вывод щита
*/