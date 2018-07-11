#pragma once
#include<iostream>
#include "Animal.h"


class Cow : public Animal
{
public:
	Cow();
	~Cow();

	int ID()
	{
		return 1;
	}

	void Talk();
	int Eat();
	int GiveMilk();

	virtual Animal* Clone();

};

