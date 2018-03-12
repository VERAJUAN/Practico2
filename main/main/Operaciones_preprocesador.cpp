#include "stdafx.h"
#include <string>
#define CONC(v1,v2)  { #v1 ## #v2 }
using namespace std;


string conc(int v1, int v2) {    
	return CONC(v1, v2);
}