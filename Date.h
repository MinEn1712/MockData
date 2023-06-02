#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "RNG.h"
using namespace std;

class Date {
private:
	int _day;
	int _month;
	int _year;
public:
	int getDay() { return _day; }
	int getMonth() { return _month; }
	int getYear() { return _year; }
public:
	Date();
	static Date Now() { return Date(); }
public:
	bool isLeapYear(int year);
	int checkMonth(int month, int year);
	wstring toString();
};