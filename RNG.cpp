#include "RNG.h"

RNG::RNG() {
	srand(int(time(NULL)));
}
shared_ptr<RNG> RNG::instance() {
	if (_instance == NULL) {
		auto temp = new RNG();
		_instance = shared_ptr<RNG>(temp);
	}
	return _instance;
}
int RNG::next() {
	return rand();
}