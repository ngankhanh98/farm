#include "stdafx.h"
#include "Cow.h"
using namespace std;


Cow::Cow()
{
}


Cow::~Cow()
{
}

//int Cow::Gender(int index)
//{
//	(*this).Gender = index;
//	return (*this).Gender;
//}

void Cow::Talk()
{
	cout << "Moo...moo..." << endl; 
}

int Cow::Eat()
{
	return 1 + rand() % 5;
}

int Cow::GiveMilk()
{
	return 5 + rand() % 6;
}

Animal * Cow::Clone()
{
	return new Cow(*this);
}
