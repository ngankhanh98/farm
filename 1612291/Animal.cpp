#include "stdafx.h"
#include "Animal.h"


Animal::Animal()
{
}


void Animal::SetterGender(int index)
{
	Gender = index;
}

int Animal::GetterGender()
{
	return Gender;
}


vector<Animal*> Animal::GiveBirth()
{
	vector<Animal*> animal(NULL);
	Animal* newborn;
	
	animal.push_back(this->Clone());

	if (this->GetterGender() == 0) 
	{
		int n = 1 + rand() % 3;
		for (int i = 0; i < n; i++) 
		{
			newborn = this->Clone();
			newborn->SetterGender(rand() % 2);
			animal.push_back(newborn);
		}
			
	}
	return animal;
};

