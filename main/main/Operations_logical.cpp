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
//Ac� podria usar una funci�n ya existente, para que en una l�nea de c�digo ya haga el reemplazo. 
//Creo que aca hice un ejemplo de una especie de "polimorfismo", pero en si creo que lo que hace es convertir las variables de int a char para ejecutar la primer funci�n.