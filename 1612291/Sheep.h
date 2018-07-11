#pragma once
#include "Animal.h"
class Sheep :
	public Animal
{
public:
	Sheep();
	~Sheep();

	int ID()
	{
		return 2;
	}

	void Talk();
	int Eat();
	int GiveMilk();

	Animal* Clone();
};

