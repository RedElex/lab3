// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    
    Enemy enemy = enemy.initializeEnemy(" ", 0, 0);
    enemy = enemy.inputEnemy();
    enemy.outputEnemy(enemy);

    int k; // переменная количества оружия
    cout << "Введите количество оружия в инвентаре" << endl;
    do
    {
        cin >> k;
    } while (k < 1);

    Weapon* weapon = new Weapon[k];
    for (int i = 0; i < k; i++)
    {
        weapon[i] = weapon->initializeWeapon(" ", 0, 0);
        weapon[i] = weapon->inputWeapon();
    }

    cout << "Выберете оружие" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << i << ")" << endl;
        weapon->outputWeapon(weapon[i]);
    }

    int ChoiceWeapon; // Переменная выбора оружия
    do
    {
        cin >> ChoiceWeapon;

    } while (ChoiceWeapon<0||ChoiceWeapon>k);

    Shield shield[2];
    for (int i = 0; i < 2; i++)
    {
        shield[i] = shield->initializeShield("", 0, 0);
        shield[i] = shield->inputShield();
    }
    cout << "Выберете щит" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << i << ")" << endl;
        shield->outputShield(shield[i]);
    }

    int ChoiceShield; // Переменная выбора щита
    do
    {
        cin >> ChoiceShield;

    } while (ChoiceShield <0 || ChoiceShield>(2-1));

    Armor armor = armor.initializeArmor("", 0, 0);
    armor = armor.inputArmor();
    armor.outputArmor(armor);

    Hero hero = hero.initializeHero("", 0, 0);
    hero = hero.inputHero(armor, weapon[ChoiceWeapon], shield[ChoiceShield]);
    hero.outputHero(hero);

    int result = 0;
    result = hero.Fight(hero, enemy);

    switch (result)
    {
    case 0:
        cout << "Ничья" << endl;
        break;
    case 1:
        cout << "Поражение" << endl;
        break;
    case 2:
        cout << "Победа" << endl;
        break;
    }
}