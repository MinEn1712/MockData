#include "StudentInfo.h"

int main() {
	_setmode(_fileno(stdout), _O_U16TEXT);

	StudentInfo s;
	for (int i = 0; i < 30; i++) {
		wcout << "Student #" << i + 1 << endl;
		wcout << s.nextStudent() << endl;
	}

	return 0;
}