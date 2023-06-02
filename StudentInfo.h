#pragma once
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

#include "RNG.h"
#include "Date.h"
#include "StudentID.h"
#include "Gender.h"
#include "Name.h"
#include "Address.h"
#include "Email.h"
#include "TelephoneNumber.h"
#include "GPA.h"

class StudentInfo {
private:
	Gender _gender;
	Name _fullname;
	StudentID _id;
	Date _dob;
	Address _address;
	TelephoneNumber _telnum;
	Email _email;
	GPA _gpa;
public:
	wstring nextStudent();
};