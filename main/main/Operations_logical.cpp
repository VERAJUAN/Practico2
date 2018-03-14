#include "stdafx.h"
#include <algorithm>

using namespace std;

int exchange(char x, char y) {
	char aux;
	aux = x;
	x = y;
	y = aux;
	printf("Ahora x vale:%i\n", x);
	printf("Ahora y vale:%i\n", y);
	return 0;
}

int exchange(int x, int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
	printf("Ahora x vale:%i\n", x);
	printf("Ahora y vale:%i\n", y);
	return 0;
}