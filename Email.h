#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <regex>
#include <algorithm>
#include "RNG.h"
using namespace std;

class Email {
private:
	string _name;
	string _domain;
public:
	wstring convertName(const wstring& text);
	wstring next(wstring name);
};