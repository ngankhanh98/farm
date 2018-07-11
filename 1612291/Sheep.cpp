#include "stdafx.h"
#include "Sheep.h"
using namespace std;



Sheep::Sheep()
{
}


Sheep::~Sheep()
{
}



void Sheep::Talk()
{
	cout << "Bee...bee..." << endl;
}

int Sheep::Eat()
{
	return 1 + rand() % 3;
}

int Sheep::GiveMilk()
{
	return 3 + rand() % 4;
}

Animal * Sheep::Clone()
{
	return new Sheep(*this);
}
