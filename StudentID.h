#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "RNG.h"
#include "Date.h"
#include "Major.h"
using namespace std;

class StudentID {
public:
	StudentID();
	wstring next(int);
	wstring next(int, int);
};