#pragma once
#include "Human.h"
class TStudent :public THuman
{
public:
	TStudent();
	TStudent(int _Age, int _Weight, int _Course);
	int GetCourse();
	void SetCourse(int _Course);
	virtual void Print();
protected:
	int Course;
};

