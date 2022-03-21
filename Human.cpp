#include "Human.h"
#include <iostream>
THuman::THuman()
{
	Age = 0;
	Weight = 0;
}
THuman::~THuman()
{
	Age = 0;
	Weight = 0;
}
int THuman::GetAge()
{
	return Age;
}
int THuman::GetWeight()
{
	return Weight;
}
void THuman::SetAge(int _Age)
{
	if (_Age > 0)
		this->Age = _Age;
}
void THuman::SetWeight(int _Weight)
{
	if (_Weight > 0)
		this->Weight = _Weight;
}

void THuman::Print()
{
	std::cout << "Human,   Age=\t" << this->GetAge() << "\tWeight=\t" << this->GetWeight() << std::endl;
}
