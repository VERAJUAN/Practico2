// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Operaciones_matematicas.h"

using namespace std;

void main(void)
{
	
	do
	{	
	int opcion;
	float n1;
	printf("\nOperaciones a realizar:\n1- El cuadrado de un numero.\n2- La suma de dons numeros.\n3- El area de un circulo.\n4- El maximo de dos numeros.\n5- Concatencion de nombres de variables.\n6- Imprimir por pantalla un texto.\n7- Comparacion de cadena.\n8- Operaciones binarias.\n9- Operaciones logicas.\n0- Salir.\nIngrese opcion:\n");
	
	cin >> opcion;

		switch (opcion)
		{
	
		case 1:
			cout << "\nIngrese el número a sacar su cuadrado:\n";
			cin >> n1;
			printf("Resultado:%f\n", cuad(n1));
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;	
		default:
			break;
		}

	} while (true);
}

