#include <iostream>
#include <string.h>
#include "Human.h"
#include "Student.h"
#include "Worker.h"
#include "DistanceLearningStudent.h"
#include "FullTimeLearningStudent.h"
#include "OfficiallyEmployedWorker.h"
#include "UnofficiallyEmployedWorker.h"
using namespace std;
int main()
{
	THuman Egor;
	Egor.SetAge(18);
	Egor.SetWeight(70);
	TStudent Vladislav(19, 80, 1);
	TWorker Ivan(27, 80, 50000);
	TDistanceLearningStudent Vladimir(20, 68, 3, false);
	TFullTimeLearningStudent Nikita(19, 75, 2, true);
	TOfficiallyEmployedWorker Roman(25, 74, 30000, 1000);
	TUnofficiallyEmployedWorker Alexander(30, 85, 70000, true);
	Egor.Print();
	std::cout << endl;
	Vladislav.Print();
	Ivan.Print();
	std::cout << endl;
	Vladimir.Print();
	Nikita.Print();
	std::cout << endl;
	Roman.Print();
	Alexander.Print();
	return 0;
}