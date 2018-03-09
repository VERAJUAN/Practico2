#include "stdafx.h"

#define PI 3.1415

float cuad(float n) {
	n *= n;
	return n;
}

float sum(float n1, float n2) {
	n1 += n2;
	return n1;
}

float area(float r) {
	r = ((r * r) * PI);
	return r;
}

float max(float n1, float n2) {
	if (n2 > n1) { n1 = n2; }
	return n1;
}