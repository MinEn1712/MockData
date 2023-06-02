#include "TelephoneNumber.h"

wstring headTelNum[10] = { L"086", L"096", L"097", L"098", L"089", L"090", L"093", L"092", L"037", L"038" };

wstring TelephoneNumber::next() {
	auto intGen = RNG::instance();

	wstringstream builder;
	builder << headTelNum[intGen->next() % 10] << intGen->next() % 10 << " ";
	for (int i = 0; i < 3; i++) builder << intGen->next() % 10;
	builder << " ";
	for (int i = 0; i < 3; i++) builder << intGen->next() % 10;
	return builder.str();
}
