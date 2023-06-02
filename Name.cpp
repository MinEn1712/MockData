#include "Name.h"

//First name
vector<wstring> first = { L"Nguyễn", L"Trần", L"Lê", L"Phạm", L"Huỳnh", 
						  L"Đặng", L"Vũ", L"Ngô", L"Phan", L"Bùi" };

//Middle name
vector<wstring> midMale = { L"Văn", L"Hữu", L"Minh", L"Bảo", L"Thành", 
							L"Gia", L"Hoàng", L"Huy", L"Quốc", L"Thiên"};
vector<wstring> midFemale = { L"Thị", L"Minh", L"Bảo", L"Thu", L"Như", 
							  L"Thanh", L"Ngọc", L"Đan", L"Khánh", L"Hồng", };

//Last name
vector<wstring> lastMale = { L"An", L"Anh", L"Bảo", L"Bình", L"Chí", L"Dũng", L"Hải", L"Kiệt", L"Long", L"Mạnh",
							 L"Nhân", L"Nam", L"Phúc", L"Quân", L"Quang", L"Sang", L"Sáng", L"Tùng", L"Thái", L"Vũ"};
vector<wstring> lastFemale = { L"An", L"Anh", L"Bình", L"Chi", L"Dung", L"Huyền", L"Kim", L"Lam", L"Linh", L"Mai", 
							   L"Ngân", L"Phương", L"Quỳnh", L"Thư", L"Thảo", L"Uyên", L"Vân", L"Xuân", L"Ý", L"Yến"};


wstring Name::next(int gender) {
	auto intGen = RNG::instance();

	if (gender == 0) {
		this->_first = first[intGen->next() % 10];
		this->_mid = midMale[intGen->next() % 10];
		this->_last = lastMale[intGen->next() % 20];
	}
	else if (gender == 1) {
		this->_first = first[intGen->next() % 10];
		this->_mid = midFemale[intGen->next() % 10];
		this->_last = lastFemale[intGen->next() % 20];
	}
	wstringstream builder;
	builder << this->_first << " " << this->_mid << " " << this->_last;
	return builder.str();
}