#include "Email.h"

vector<wstring> emailDomain{ L"gmail.com", L"microsoft.com", L"apple.com", L"amazon.com", L"yahoo.com",
						L"outlook.com", L"icloud.com", L"protonmail.com", L"aol.com", L"yandex.com" };

wstring Email::convertName(const wstring& text) {
	wstring result(text);
	result = regex_replace(result, wregex(L"à|á|ạ|ả|ã|â|ầ|ấ|ậ|ẩ|ẫ|ă|ằ|ắ|ặ|ẳ|ẵ|/g"), L"a");
	result = regex_replace(result, wregex(L"À|Á|Ạ|Ả|Ã|Â|Ầ|Ấ|Ậ|Ẩ|Ẫ|Ă|Ằ|Ắ|Ặ|Ẳ|Ẵ|/g"), L"A");
	result = regex_replace(result, wregex(L"è|é|ẹ|ẻ|ẽ|ê|ề|ế|ệ|ể|ễ|/g"), L"e");
	result = regex_replace(result, wregex(L"È|É|Ẹ|Ẻ|Ẽ|Ê|Ề|Ế|Ệ|Ể|Ễ|/g"), L"E");
	result = regex_replace(result, wregex(L"ì|í|ị|ỉ|ĩ|/g"), L"i");
	result = regex_replace(result, wregex(L"Ì|Í|Ị|Ỉ|Ĩ|/g"), L"I");
	result = regex_replace(result, wregex(L"ò|ó|ọ|ỏ|õ|ô|ồ|ố|ộ|ổ|ỗ|ơ|ờ|ớ|ợ|ở|ỡ|/g"), L"o");
	result = regex_replace(result, wregex(L"Ò|Ó|Ọ|Ỏ|Õ|Ô|Ồ|Ố|Ộ|Ổ|Ỗ|Ơ|Ờ|Ớ|Ợ|Ở|Ỡ|/g"), L"O");
	result = regex_replace(result, wregex(L"ù|ú|ụ|ủ|ũ|ư|ừ|ứ|ự|ử|ữ|/g"), L"u");
	result = regex_replace(result, wregex(L"Ù|Ú|Ụ|Ủ|Ũ|Ư|Ừ|Ứ|Ự|Ử|Ữ|/g"), L"U");
	result = regex_replace(result, wregex(L"ỳ|ý|ỵ|ỷ|ỹ|/g"), L"y");
	result = regex_replace(result, wregex(L"Ỳ|Ý|Ỵ|Ỷ|Ỹ|/g"), L"y");
	result = regex_replace(result, wregex(L"đ"), L"d");
	result = regex_replace(result, wregex(L"Đ"), L"D");
	return result;
}
wstring Email::next(wstring name) {
	wstring nameBuf = convertName(name);
	wstring firstName, midName, lastName;

	transform(nameBuf.begin(), nameBuf.end(), nameBuf.begin(), ::tolower);

	wistringstream wiss(nameBuf);
	getline(wiss, firstName, L' ');
	getline(wiss, midName, L' ');
	getline(wiss, lastName, L' ');

	auto intGen = RNG::instance();

	wstringstream builder;
	builder << firstName[0] << midName[0] << lastName << "@" << emailDomain[intGen->next() % 10];
	return builder.str();
}