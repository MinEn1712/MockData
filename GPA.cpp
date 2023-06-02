#include "GPA.h"

wstring GPA::next() {
	auto intGen = RNG::instance();

	wstringstream gpa;
	int grade = intGen->next() % 11;
	if(grade == 10)
		gpa << grade << "." << 0;
	else 
		gpa << grade << "." << rand() % 10;
	return  gpa.str();
}