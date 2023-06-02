#include "Date.h"

int Year[10] = { 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004 };

bool Date::isLeapYear(int year) {
	if (year % 400 == 0) return 1;
	else if (year % 100 == 0) return 0;
	else if (year % 4 == 0) return 1;
	else return 0;
}
int Date::checkMonth(int month, int year) {
	if (isLeapYear(year)) {
		int maxDay[12]{ 31,29,31,30,31,30,31,31,30,31,30,31 };
		return maxDay[month - 1];
	}
	else {
		int maxDay[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
		return maxDay[month - 1];
	}
}
wstring Date::toString() {
	wstringstream builder;
	builder << this->_day << "/" << this->_month << "/" << this->_year;
	return builder.str();
}
Date::Date() {
	auto intGen = RNG::instance();

	this->_year = Year[intGen->next() % 10];
	this->_month = intGen->next() % 12 + 1;
	this->_day = intGen->next() % checkMonth(this->_month, this->_year) + 1;
}