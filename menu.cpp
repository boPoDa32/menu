#include "stdafx.h"
#include <string>
#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu(){}

Menu::Menu(string nameprod,int weight,int number)
{
nameprod = "0";
weight = 1;
number = 2;
}

void Menu::set(string nameprdcs, int wess,int chislo)
{
nameprod = nameprdcs;
weight = wess;
number = chislo;
}

int Menu::get()
{
return number;
}

void Menu::displayMenu()
{
	cout<<get();
}
