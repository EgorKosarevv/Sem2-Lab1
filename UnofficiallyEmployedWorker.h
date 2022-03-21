#pragma once
#include "Worker.h"
class TUnofficiallyEmployedWorker :public TWorker
{
public:
	TUnofficiallyEmployedWorker();
	TUnofficiallyEmployedWorker(int _Age, int _Weight, int _Salary, bool _MainWork);
	bool GetMainWork();
	void SetMainWork(bool n);
	virtual void Print();
protected:
	bool MainWork;
};

