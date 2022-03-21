#include "DistanceLearningStudent.h"
TDistanceLearningStudent::TDistanceLearningStudent() :TStudent()
{
	AdditionalEarnings = false;
}
TDistanceLearningStudent::TDistanceLearningStudent(int _Age, int _Weight, int _Course, bool _AdditionalEarnings)
{
	SetAge(_Age);
	SetWeight(_Weight);
	SetCourse(_Course);
	SetAdditionalEarnings(_AdditionalEarnings);
}
bool TDistanceLearningStudent::GetAdditionalEarnings()
{
	return AdditionalEarnings;
}
void TDistanceLearningStudent::SetAdditionalEarnings(bool n)
{
	AdditionalEarnings = n;
}
void TDistanceLearningStudent::Print()
{
	std::cout << "DistanceLearningStudent, Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight()
		<< "\tCourse=\t" << this->GetCourse() << "\tAdditionalEarnings=\t" << this->GetAdditionalEarnings() << std::endl;
}
;
