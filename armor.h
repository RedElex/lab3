#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Armor
{
public:
	Armor initializeArmor(string name, int protection, int type); // Инициализация
	Armor inputArmor(); // Ввод
	void outputArmor(Armor armor); // Вывод
	int getProtectionArmor(Armor armor); // Получение protection
private:
	string name;
	int protection;
	int type;
};


