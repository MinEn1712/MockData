#include "Address.h"

//District
wstring district[5] = { L"Quận 1", L"Quận 3", L"Quận 5", L"Quận Tân Bình", L"Quận Thủ Đức" };

//Ward
wstring wardQ1[8] = { L"Phường Bến Thành", L"Phường Đa Kao", L"Phường Tân Định", L"Phường Bến Nghé",
					  L"Phường Cô Giang", L"Phường Nguyễn Cư Trinh", L"Phường Phạm Ngũ Lão", L"Phường Nguyễn Thái Bình" };

wstring wardQ3[8] = { L"Phường 1", L"Phường 2", L"Phường 3", L"Phường 4",
					  L"Phường 5", L"Phường 9", L"Phường 10", L"Phường 11" };

wstring wardQ5[8] = { L"Phường 1", L"Phường 2", L"Phường 3", L"Phường 4",
					  L"Phường 5", L"Phường 6", L"Phường 7", L"Phường 8" };

wstring wardTB[8] = { L"Phường 15", L"Phường 14", L"Phường 13", L"Phường 12",
					 L"Phường 11", L"Phường 10", L"Phường 9", L"Phường 8" };

wstring wardTD[8] = { L"Phường Linh Trung",L"Phường Linh Tây", L"Phường Linh Xuân", L"Phường Linh Đông",
					  L"Phường Cát Lái", L"Phường Tân Phú", L"Phường Tam Bình", L"Phường Tam Phú" };

//Street
wstring streetQ1[5] = { L"Đường Lê Duẩn", L"Đường Nam Kỳ Khởi Nghĩa", L"Đường Hai Bà Trưng",
					   L"Đường Điện Biên Phủ", L"Đường Đinh Tiên Hoàng" };

wstring streetQ3[5] = { L"Đường Nguyễn Tri Phương", L"Đường Nguyễn Văn Trỗi", L"Đường Phạm Ngọc Thạch",
					   L"Đường Nguyễn Thượng Hiền", L"Đường Cao Thắng" };

wstring streetQ5[5] = { L"Đường Nguyễn Văn Cừ", L"Đường Trần Hưng Đạo", L"Đường An Dương Vương",
					   L"Đường Nguyễn Trãi", L"Đường Lê Hồng Phong" };

wstring streetTB[5] = { L"Đường Trường Chinh", L"Đường Cộng Hoà", L"Đường Cách Mạng Tháng Tám",
					   L"Đường Lạc Long Quân", L"Đường Âu Cơ" };

wstring streetTD[5] = { L"Đường Phạm Văn Đồng", L"Đường Kha Vạn Cân", L"Đường Bình Chiều",
					   L"Đường Bình Phú", L"Đường Hoàng Diệu" };


wstring Address::toString(int num) {
	wstringstream builder;
	builder << num;
	return builder.str();
}

wstring Address::next() {
	auto intGen = RNG::instance();

	this->_number = toString(intGen->next() % 300);
	this->_district = district[intGen->next() % 5];
	if (this->_district == L"Quận 1") {
		this->_ward = wardQ1[intGen->next() % 8];
		this->_street = streetQ1[intGen->next() % 5];
	}
	else if (this->_district == L"Quận 3") {
		this->_ward = wardQ3[intGen->next() % 8];
		this->_street = streetQ3[intGen->next() % 5];
	}
	else if (this->_district == L"Quận 5") {
		this->_ward = wardQ5[intGen->next() % 8];
		this->_street = streetQ5[intGen->next() % 5];
	}
	else if (this->_district == L"Quận Tân Bình") {
		this->_ward = wardTB[intGen->next() % 8];
		this->_street = streetTB[intGen->next() % 5];
	}
	else if (this->_district == L"Quận Thủ Đức") {
		this->_ward = wardTD[intGen->next() % 8];
		this->_street = streetTD[intGen->next() % 5];
	}

	wstringstream builder;
	builder << this->_number << " " << this->_street << ", " << this->_ward << ", " << this->_district;
	return builder.str();
}