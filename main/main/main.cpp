// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"
#include "Operaciones_binarias.h"

using namespace std;

void main(void)
{
	char v1 = 'a';
	char v2 = 'b';
	char palabra1[] = "";
	char palabra2[] = "";
	
	bool flag = true;
	int opcion;
	float n1, n2;
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
			cout << "\nIngrese el radio del circulo:\n";
			cin >> n1;
			printf("El area es:%.2f\n", area(n1));
			break;
		case 4:
			cout << "\nIngrese el primer numero:\n";
			cin >> n1;
			cout << "\nIngrese el segundo numero:\n";
			cin >> n2;
			printf("El numero mayor es:%.2f\n", max(n1,n2));
			break;
		case 5:			
			conc(v1, v2);
			break;	
		case 6:
			conc(v1, v2);
			break;
		case 7:
			cout << "\nEscriba el texto 1:";
			cin.getline(palabra1,250, '.');
			cout << "\nEscriba el texto 2:";
			cin.getline(palabra2, 250, '.');
			if (comp(palabra1, palabra2) == 0) {
				printf("Ambos textos son iguales\n");
			}else{
				printf("Ambos textos son distintos\n");
			}
			break;
		case 8:
			break;
		case 0:
			flag = false;
			break;
		default:
			break;
		}

	} while (flag);
}

