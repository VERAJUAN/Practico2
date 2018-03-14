#include "stdafx.h"
#include <string>
#include <iostream>
#define CONC(x,y) x##y

using namespace std;

char conc(char v1, char v2) {
	char CONC(v1, v2)[] = { v1, v2, '\0' };
	cout << CONC(v1, v2);
	return 0;
}