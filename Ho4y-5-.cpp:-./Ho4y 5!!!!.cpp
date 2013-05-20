// Ho4y 5!!!!.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include "Menu.h"
#include <iostream>
using namespace std;
int main()
{
  	string nmprod;
	int weht;
	int nuer;
	cout<<"Nazvanie producta: "<<endl;
	cin>>nmprod;
	cout<<"Vvedite ves: "<<endl;
	cin>>weht;
	cout<<"Koli4estvo: "<<endl;
	cin>>nuer;

	Menu myMenu;
	myMenu.set(nmprod,weht,nuer);
	return 0;
}
