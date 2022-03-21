#include "Student.h"
TStudent::TStudent() :THuman()
{
	Course = 0;
}
TStudent::TStudent(int _Age, int _Weight, int _Course)
{
	SetAge(_Age);
	SetWeight(_Weight);
	SetCourse(_Course);
}
int TStudent::GetCourse()
{
	return Course;
}
void TStudent::SetCourse(int _Course)
{
	if (_Course > 0 && _Course < 7)
		this->Course = _Course;
}
void TStudent::Print()
{
	std::cout << "Student, Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight() << "\tCourse=\t" << this->GetCourse()
		<< std::endl;
}
;

