#pragma once
#include<iostream>
#include"Animal.h"
#include"Cow.h"
#include"Goat.h"
#include"Sheep.h"



class Farm
{
private:
	vector<Animal*>mpAnimal;
	
public:
	Farm();
	~Farm();

	void ScreamAnimal();
	void CountAnimal();
	void CountMilk();
	void Eat();
	void Birth();

};

