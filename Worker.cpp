#include "Worker.h"
TWorker::TWorker() :THuman()
{
	Salary = 0;
}
TWorker::TWorker(int _Age, int _Weight, int _Salary)
{
	SetAge(_Age);
	SetWeight(_Weight);
	SetSalary(_Salary);
}
int TWorker::GetSalary()
{
	return Salary;
}
void TWorker::SetSalary(int _Salary)
{
	if (_Salary > 0)
		this->Salary = _Salary;
}

void TWorker::Print()
{
	std::cout << "Worker,  Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight() << "\tSalary=\t" << this->GetSalary()
		<< std::endl;
}
;
