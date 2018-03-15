#include "stdafx.h"
#include <bitset>
#define SCROLLLEFT(a) ((a)<<(2))
#define SCROLLRIGHT(a) ((a)>>(2))
#define AND(a,b) ((a)&(b))
#define OR(a,b) ((a)|(b))

using namespace std;

unsigned int scrollLeft(unsigned int number) {
	return SCROLLLEFT(number);
}

unsigned int scrollRight(unsigned int number) {
	return SCROLLRIGHT(number);
}

unsigned int and(unsigned int number1, unsigned int number2) {
	return AND(number1, number2);
}

unsigned int or(unsigned int number1, unsigned int number2) {
	return OR(number1, number2);
}