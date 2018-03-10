// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "Operaciones_matematicas.h"

using namespace std;

void main(void)
{
	bool flag = true;
	int opcion;
	float n1, n2; double r;
	do
	{	
	
	printf("\nOperaciones a realizar:\n1- El cuadrado de un numero.\n2- La suma de dons numeros.\n3- El area de un circulo.\n4- El maximo de dos numeros.\n5- Concatencion de nombres de variables.\n6- Imprimir por pantalla un texto.\n7- Comparacion de cadena.\n8- Operaciones binarias.\n9- Operaciones logicas.\n0- Salir.\nIngrese opcion:\n");
	
	cin >> opcion;

		switch (opcion)
		{
	
		case 1:
			cout << "\nIngrese el numero a sacar su cuadrado:\n";
			cin >> n1;
			printf("Resultado:%.2f\n", cuad(n1));
			break;
		case 2:
			cout << "\nIngrese el primer numero a sumar:\n";
			cin >> n1;
			cout << "\nIngrese el segundo numero a sumar:\n";
			cin >> n2;
			printf("Resultado:%.2f\n", sum(n1,n2));
			break;
		case 3:
			cout << "\nIngrese el radio del circuloo:\n";
			cin >> r;
			printf("Resultado:%.2f\n", area(r));
			break;
		case 4:
			break;
		case 5:
			break;	
		case 0:
			flag = false;
			break;
		default:
			break;
		}

	} while (flag);
}

