#include "stdafx.h"
#include "Goat.h"
using namespace std;



Goat::Goat()
{
}


Goat::~Goat()
{
}



void Goat::Talk()
{
	cout << "Baa...baa..." << endl;
}

int Goat::Eat()
{
	return 1 + rand() % 1;
}

int Goat::GiveMilk()
{
	return 2 + rand() % 3;
}

Animal * Goat::Clone()
{
	return new Goat(*this);
}
