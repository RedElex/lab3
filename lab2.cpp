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
    
    Enemy enemy = enemy.initializeEnemy(" ", 0, 0); //Инициализируем противника
    enemy = enemy.inputEnemy(); // Вводим противника
    enemy.outputEnemy(enemy);   // Выводим противника

    int k; // переменная количества оружия
    cout << "Введите количество оружия в инвентаре" << endl;
    do
    {
        cin >> k;
    } while (k < 1);

    Weapon* weapon = new Weapon[k]; // Выделяем память для weapon
    for (int i = 0; i < k; i++) // Инициализируем и вводим список оружия
    {
        weapon[i] = weapon->initializeWeapon(" ", 0, 0); 
        weapon[i] = weapon->inputWeapon(); 
    }

    cout << "Выберете оружие" << endl;
    for (int i = 0; i < k; i++) // Выбор оружия
    {
        cout << i << ")" << endl;
        weapon->outputWeapon(weapon[i]);
    }

    int ChoiceWeapon; // Переменная выбора оружия
    do
    {
        cin >> ChoiceWeapon;

    } while (ChoiceWeapon<0||ChoiceWeapon>k);

    Shield shield[2]; // статичный массив щитов

    for (int i = 0; i < 2; i++) // Инициализация и ввод списка шитов
    {
        shield[i] = shield->initializeShield("", 0, 0); 
        shield[i] = shield->inputShield();
    }
    cout << "Выберете щит" << endl;
    for (int i = 0; i < 2; i++) // Выбор щита
    {
        cout << i << ")" << endl;
        shield->outputShield(shield[i]);
    }

    int ChoiceShield; // Переменная выбора щита
    do
    {
        cin >> ChoiceShield;

    } while (ChoiceShield <0 || ChoiceShield>(2-1));

    Armor armor = armor.initializeArmor("", 0, 0); // Инициализация брони
    armor = armor.inputArmor(); // Ввод брони
    armor.outputArmor(armor); // Вывод брони

    Hero hero = hero.initializeHero("", 0, 0); // Инициализация героя
    hero = hero.inputHero(armor, weapon[ChoiceWeapon], shield[ChoiceShield]); // Ввод героя
    hero.outputHero(hero); // Вывод героя

    int result = 0; // Переменная результата
    result = hero.Fight(hero, enemy); // Функция вычисления результата

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
    
    delete weapon; // Освобождаем память от динамического массива объектов
}