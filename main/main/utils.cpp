#include "stdafx.h"
#include <cassert> 
#include <iostream>
using namespace std;

int as() {
	int b = 7, c = 0, d;
	assert(c != 0);
	d = b / c;
	return d;
}

enum log_level_t {
	LOG_ERROR,
	LOG_WARNING,
	LOG_INFO,
	LOG_TRACE
};