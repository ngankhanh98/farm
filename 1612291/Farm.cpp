#include "stdafx.h"
#include "Farm.h"

using namespace std;


Farm::Farm()
{
	int cows, goats, sheeps;
	int female;

	cout << "Cows:  ";
	cin >> cows;
	do
	{
		cout << "female cows: ";
		cin >> female;
	} while (female > cows);

	int i = 0;

	for (; i < cows; i++)
	{
		mpAnimal.push_back(new Cow);
		mpAnimal[i]->SetterGender((i < female) ? 1 : 0);
	}

	cout << "Sheeps: ";
	cin >> sheeps;
	do
	{
		cout << "female sheeps: ";
		cin >> female;
	} while (female > sheeps);

	int j = 0;
	for (; i < cows + sheeps; i++, j++)
	{
		mpAnimal.push_back(new Sheep);
		mpAnimal[i]->SetterGender((j < female) ? 1 : 0);
	}

	cout << "Goats: ";
	cin >> goats;
	do
	{
		cout << "female goats: ";
		cin >> female;
	} while (female > goats);

	for (j = 0; i < cows + sheeps + goats; i++, j++)
	{
		mpAnimal.push_back(new Goat);
		mpAnimal[i]->SetterGender((j < female) ? 1 : 0);
	}

}

Farm::~Farm()
{
	for (int i = mpAnimal.size() - 1; i >= 0; i--)
	{
		if (mpAnimal[i] != NULL)
			delete[]mpAnimal[i];
	}
}

void Farm::ScreamAnimal()
{
	for (int i = 0; i < mpAnimal.size(); i++)
	{
		mpAnimal[i]->Talk();
	}
}

void Farm::CountAnimal()
{
	int cows = 0, sheeps = 0, goats = 0;
	for (int i = 0; i < mpAnimal.size(); i++)
	{
		switch (mpAnimal[i]->ID())
		{
		case 1: cows++;
			break;
		case 2: sheeps++;
			break;
		case 3: goats++;
			break;
		}
	}

	cout << "There're " << cows << (cows > 1 ? " cows, " : " cow, ");
	cout << sheeps << (sheeps > 1 ? " sheeps, " : " sheep, ");
	cout << goats << (goats > 1 ? " goats" : " goat");
	cout << " in your farm" << endl;
}

void Farm::CountMilk()
{
	int result = 0;

	for (int i = 0; i < mpAnimal.size(); i++)
		result += (mpAnimal[i]->GetterGender() == 1) ? (mpAnimal[i]->GiveMilk()) : 0;

	cout << "Give milk\t\t " << result << "(l)" << endl;
}

void Farm::Eat()
{
	int result = 0;

	for (int i = 0; i < mpAnimal.size(); i++)
		result += mpAnimal[i]->Eat();

	cout << "Eat\t\t\t " << result<<"(kg)" << endl;

}

void Farm::Birth()
{

	cout << "After reproductive season," << endl;
	vector<Animal*> newborn;

	int num = mpAnimal.size();
	for (int i = 0; i < num; i++)
	{
		newborn = mpAnimal[i]->GiveBirth();
		mpAnimal.insert(mpAnimal.end(), newborn.begin(), newborn.end());
		newborn.clear();
		if (i == num - 1)
			break;
	}
}



