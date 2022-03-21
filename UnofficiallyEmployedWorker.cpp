#include "UnofficiallyEmployedWorker.h"
TUnofficiallyEmployedWorker::TUnofficiallyEmployedWorker() :TWorker()
{
	MainWork = false;
}
TUnofficiallyEmployedWorker::TUnofficiallyEmployedWorker(int _Age, int _Weight, int _Salary, bool _MainWork)
{
	SetAge(_Age);
	SetWeight(_Weight);
	SetSalary(_Salary);
	SetMainWork(_MainWork);
}
bool TUnofficiallyEmployedWorker::GetMainWork()
{
	return MainWork;
}
void TUnofficiallyEmployedWorker::SetMainWork(bool n)
{
	MainWork = n;
}
void TUnofficiallyEmployedWorker::Print()
{
	std::cout << "UnofficiallyEmployedWorker, Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight()
		<< "\tSalary=\t" << this->GetSalary() << "\tMainWork=\t" << this->GetMainWork() << std::endl;
}
;
