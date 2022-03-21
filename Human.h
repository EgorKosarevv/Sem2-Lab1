#pragma once
#include<iostream>
class THuman
{
public:
	THuman();
	~THuman();
	int GetAge();
	int GetWeight();
	void SetAge(int _Age);
	void SetWeight(int _Weight);
	virtual void Print();
protected:
	int Age;
	int Weight;
};