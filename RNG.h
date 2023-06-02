#pragma once
#include <iostream>
#include <ctime>
#include <memory>
using namespace std;

class RNG {
private:
	inline static shared_ptr<RNG> _instance = NULL;
	RNG();
public:
	static shared_ptr<RNG> instance();
	int next();
};