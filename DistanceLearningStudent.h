#pragma once
#include "Student.h"
class TDistanceLearningStudent :public TStudent
{
public:
	TDistanceLearningStudent();
	TDistanceLearningStudent(int _Age, int _Weight, int _course, bool _AdditionalEarnings);
	bool GetAdditionalEarnings();
	void SetAdditionalEarnings(bool n);
	virtual void Print();
protected:
	bool AdditionalEarnings;

};


