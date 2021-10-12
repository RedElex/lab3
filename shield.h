#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Shield
{
public:
	Shield initializeShield(string name, int protection, int type);
	Shield inputShield();
	void outputShield(Shield shield);
	int getProtectionShield(Shield shield);
private:
	string name;
	int protection;
	int type;
};


