#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Shield
{
public:
	Shield initializeShield(string name, int protection, int type); // Инициализация 
	Shield inputShield(); // Ввод 
	void outputShield(Shield shield); // Вывод
	int getProtectionShield(Shield shield); // Получение protection
private:
	string name;
	int protection;
	int type;
};


