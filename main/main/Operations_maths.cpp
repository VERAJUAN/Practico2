#include "stdafx.h"
#define SQUARE(a) ((a)*(a))
#define SUM(a,b) ((a)+(b))
#define PI 3.1415
#define AREA(a) (SQUARE(a)*PI)
#define MAX(a,b) ((a)>(b)?(a):(b))


float square(float n) {
	return SQUARE(n);
}

float sum(float n1, float n2) {
	return SUM(n1, n2);
}

float area(float r) {
	return AREA(r);
}

float max(float n1, float n2) {
	return MAX(n1,n2);
}