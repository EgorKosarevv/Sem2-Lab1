#include "OfficiallyEmployedWorker.h"
TOfficiallyEmployedWorker::TOfficiallyEmployedWorker() :TWorker()
{
	Tax = 0;
}
TOfficiallyEmployedWorker::TOfficiallyEmployedWorker(int _Age, int _Weight, int _Salary, int _Tax)
{
	SetAge(_Age);
	SetWeight(_Weight);
	SetSalary(_Salary);
	SetTax(_Tax);
}
int TOfficiallyEmployedWorker::GetTax()
{
	return Tax;
}
void TOfficiallyEmployedWorker::SetTax(int _Tax)
{
	if (_Tax > 0)
		this->Tax = _Tax;
}
void TOfficiallyEmployedWorker::Print()
{
	std::cout << "OfficiallyEmployedWorker,   Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight()
		<< "\tSalary=\t" << this->GetSalary() << "\tTax=\t\t" << this->GetTax() << std::endl;
}
;
