#pragma once
#include "Worker.h"
class TOfficiallyEmployedWorker :public TWorker
{
public:
	TOfficiallyEmployedWorker();
	TOfficiallyEmployedWorker(int _Age, int _Weight, int _Salary, int _Tax);
	int GetTax();
	void SetTax(int _Tax);
	virtual void Print();
protected:
	int Tax;
};

