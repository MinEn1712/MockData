#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "RNG.h"
using namespace std;

class Address {
private:
	wstring _number;
	wstring _street;
	wstring _ward;
	wstring _district;
public:
	wstring next();
	wstring toString(int num);
};