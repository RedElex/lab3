// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include "hero.h"
#include "enemy.h"
#include "shield.h"
#include "weapon.h"
#include "armor.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    hero h = AddHero(" ", 0, 0); // Инициализируем героя
    h = InputHero(); // Вводим характеристики героя
    OutputHero(h); // Выводим характеристики героя



    enemy e = AddEnemy(" ", 0, 0); // Инициализируем врага
    e = InputEnemy(); // Вводим характеристики врага
    OutputEnemy(e); // Выводим характеристики врага




    weapon w = AddWeapon("", 0, 0);
    w = InputWeapon();
    OutputWeapon(w);
    shield s = AddShield("", 0, 0);
    s = InputShield();
    OutputShield(s);
    armor ar = AddArmor("", 0, 0);
    ar = InputArmor();
    OutputArmor(ar);
    
}