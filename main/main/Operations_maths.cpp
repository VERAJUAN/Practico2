#include "stdafx.h"

float pi = 3.1415;

float square(float n) {
	return n * n;
}

float sum(float n1, float n2) {
	return n1 + n2;
}

float area(float r) {
	return ((r * r) * pi);
}

float max(float n1, float n2) {
	if (n2 > n1) { n1 = n2; }
	return n1;
}