#include "Gender.h"

//0: Male, 1: Female
int Gender::next() {
	auto intGen = RNG::instance();
	return intGen->next() % 2;
}