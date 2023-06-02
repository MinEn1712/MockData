#include "StudentID.h"

StudentID::StudentID() {}
wstring StudentID::next(int yob) {
	Date buf;
	int year = (yob + 18) - 2000;
	int randMajor = rand() % 5;

	if (randMajor == 0) return next(year, Major::Math);
	else if (randMajor == 1) return next(year, Major::IT);
	else if (randMajor == 2) return next(year, Major::Physics);
	else if (randMajor == 3) return next(year, Major::Chemistry);
	else if (randMajor == 4) return next(year, Major::Biology);
}
wstring StudentID::next(int year, int major) {
	wstringstream builder;

	builder << year;
	builder << major;

	auto intGen = RNG::instance();
	for (int i = 1; i <= 4; i++) {
		builder << intGen->next() % 10;
	}

	wstring result = builder.str();
	return result;
}