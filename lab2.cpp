// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include "hero.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    hero h = AddHero(" ", 0, 0);
    h = InputHero();
    OutputHero(h);
}