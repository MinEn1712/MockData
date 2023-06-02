#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "RNG.h"
using namespace std;

class Name {
private:
	wstring _first;
	wstring _mid;
	wstring _last;
public:
	wstring next(int gender);
};