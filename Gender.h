#pragma once
#include <iostream>
#include "RNG.h"
using namespace std;

class Gender {
private:
	int _gender;
public:
	int next();
};