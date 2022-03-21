#pragma once
#include "Student.h"
class TFullTimeLearningStudent :public TStudent
{
public:
	TFullTimeLearningStudent();
	TFullTimeLearningStudent(int _Age, int _Weight, int _course, bool _SuccessfulStudent);
	bool GetSuccessfulStudent();
	void SetSuccessfulStudent(bool n);
	virtual void Print();
protected:
	bool SuccessfulStudent;
};



