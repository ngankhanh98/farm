#pragma once
#include "Animal.h"
class Goat :
	public Animal
{
public:
	Goat();
	~Goat();

	int ID()
	{
		return 3;
	}

	void Talk();
	int Eat();
	int GiveMilk();

	Animal* Clone();
};

