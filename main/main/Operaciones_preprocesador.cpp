#include "stdafx.h"
#include <string>
#define CONC(v1,v2)  { #v1 ## #v2 }
using namespace std;


char conc(int v1, int v2) {
	const char *str = CONC(v1, v2);
	return *str;
}