#pragma once
#include "Human.h"
class TWorker :public THuman
{
public:
	TWorker();
	TWorker(int _Age, int _Weight, int _Salary);
	int GetSalary();
	void SetSalary(int _Course);
	virtual void Print();
protected:
	int Salary;
};


