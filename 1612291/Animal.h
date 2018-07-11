#pragma once
#include<iostream>
#include<vector>
using namespace std;


class Animal
{
protected:
	int Gender;			// giới tính

public:
	Animal();
	

	virtual int ID() = 0;
	void SetterGender(int index = rand() % 2);		// set giới tính (mặc định random 0-đực, 1-cái)
	int GetterGender();								// get giới tính
	

	vector<Animal*>GiveBirth();				// phương thức sinh con
											/// return con vật, không phải số lượng
	virtual void Talk() = 0;
	virtual int Eat() = 0;
	virtual int GiveMilk() = 0;

	virtual Animal* Clone() = 0;			// tạo bảng sao
};

