#include "StudentInfo.h"

wstring StudentInfo::nextStudent() {
	int gender = this->_gender.next();
	wstring name = this->_fullname.next(gender);
	wstring add = this->_address.next();
	wstring telnum = this->_telnum.next();
	wstring email = this->_email.next(name);
	wstring gpa = this->_gpa.next();

	Date date = this->_dob.Now();
	int yob = date.getYear();
	wstring dob = date.toString();
	wstring id = this->_id.next(yob);

	wstringstream builder;
	builder << "Full Name: " << name << endl;
	builder << "Student's ID: " << id << endl;
	builder << "Date of birth: " << dob << endl;
	builder << "Address: " << add << endl;
	builder << "Telephone number: " << telnum << endl;
	builder << "Email: " << email << endl;
	builder << "GPA: " << gpa << endl;
	return builder.str();
}