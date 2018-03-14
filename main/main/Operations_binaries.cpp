#include "stdafx.h"
#include <bitset>
using namespace std;

unsigned int scrollLeft(unsigned int number) {
	return number << 2;
}

unsigned int scrollRight(unsigned int number) {
	return number >> 2;
}

unsigned int and(unsigned int number1, unsigned int number2) {
	return number1 & number2;
}

unsigned int or(unsigned int number1, unsigned int number2) {
	return number1 | number2;
}