#include "FullTimeLearningStudent.h"
TFullTimeLearningStudent::TFullTimeLearningStudent() :TStudent()
{
	SuccessfulStudent = false;
}
TFullTimeLearningStudent::TFullTimeLearningStudent(int _Age, int _Weight, int _Course, bool _SuccessfulStudent)
{
	SetAge(_Age);
	SetWeight(_Weight);
	SetCourse(_Course);
	SetSuccessfulStudent(_SuccessfulStudent);
}
bool TFullTimeLearningStudent::GetSuccessfulStudent()
{
	return SuccessfulStudent;
}
void TFullTimeLearningStudent::SetSuccessfulStudent(bool n)
{
	SuccessfulStudent = n;
}
void TFullTimeLearningStudent::Print()
{
	std::cout << "FullTimeLearningStudent, Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight()
		<< "\tCourse=\t" << this->GetCourse() << "\tSuccessfulStudent=\t" << this->GetSuccessfulStudent() << std::endl;
}
;

