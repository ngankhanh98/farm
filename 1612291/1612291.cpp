// 1612291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"Farm.h"
#include"Animal.h"
#include"Cow.h"

using namespace std;


int main()
{
	
	Farm KHANHs;

	cout << "========================================================" << endl;
	KHANHs.ScreamAnimal();
	
	cout << "========================================================" << endl;
	KHANHs.CountAnimal();
	KHANHs.CountMilk();
	KHANHs.Eat();
	
	cout << "========================================================" << endl;
	KHANHs.Birth();
	KHANHs.CountAnimal();
	KHANHs.CountMilk();
	KHANHs.Eat();
	cout << "\n\n\n\n";
	system("pause");
	return 0;
}