// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "Operations_maths.h"
#include "Operations_preprocessor.h"
#include "Operations_String.h"
#include "Operations_binaries.h"
#include "Operations_logical.h"
#include "utils.h"

using namespace std;

void main(void)
{
	char v1 = 'a';
	char v2 = 'b';
	char text2[] = "";
	char text3[] = "";
	char text1[256] = "";
	bool flag = true;
	int option, x = 1, y = 2;
	unsigned int number1,number2;
	float n1, n2;
	do
	{	
	
	printf("\nOperaciones a realizar:\n1- El cuadrado de un numero.\n2- La suma de dons numeros.\n3- El area de un circulo.\n4- El maximo de dos numeros.\n5- Concatencion de nombres de variables.\n6- Imprimir por pantalla un texto.\n7- Comparacion de cadena.\n8- Operaciones logicas.\n9- Operaciones binarias.\n10- Funcion ASSERT.\n0- Salir.\nIngrese opcion:\n");
	
	cin >> option;
	
		switch (option)
		{
	
		case 1:
			cout << "\nIngrese el numero a sacar su cuadrado:\n";
			cin >> n1;
			printf("Resultado:%.2f\n", square(n1));
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
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEscriba un texto:\n";
			cin.getline(text1, 256);
			cout << "\nImpresion del texto:\n";
			printText(text1);
			break;
		case 7:
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nEscriba el texto 1:";
			cin.getline(text2,250);
			cout << "\nEscriba el texto 2:";
			cin.getline(text3, 250);
			if (comp(text2, text3) == 0) {
				printf("Ambos textos son iguales\n");
			}else{
				printf("Ambos textos son distintos\n");
			}
			break;
		case 8:
			exchange(x, y);
			break;
		case 9:
			do {
				printf("\nOperaciones binarias.\nSeleccionar opcion:\n1- AND binario\n2- OR binario\n3- Desplazamiento de 2 bits a la derecha.\n4- Desplazamiento de 2 bits a la izquierda.\n0- Salir de operaciones binarias.\nIngrese opcion:\n");
				cin >> option;
				switch (option)
				{
				case 1:
					printf("\nIngresar primer numero:\n");
					cin >> number1;
					printf("\nIngresar segundo numero:\n");
					cin >> number2;
					printf("\nResultado:\n");
					cout << and(number1,number2) << endl;
					break;
				case 2:
					printf("\nIngresar primer numero:\n");
					cin >> number1;
					printf("\nIngresar segundo numero:\n");
					cin >> number2;
					printf("\nResultado:\n");
					cout << or(number1, number2) << endl;
					break;
				case 3:
					printf("\nIngresar numero:\n");
					cin >> number1;
					printf("\nResultado:\n");
					cout << scrollRight(number1) << endl;
					break;
				case 4:
					printf("\nIngresar numero:\n");
					cin >> number1;
					printf("\nResultado:\n");
					cout << scrollLeft(number1) << endl;
					break;
				case 0:
					flag = false;
					break;
				default:
					printf("\nLa opcion no existe.\n");
					break;
				}
			} while (flag);
			flag = true;
			break;
		case 10:
			as();
			break;
		case 0:
			flag = false;
			break;
		default:
			printf("\nLa opcion no existe.\n");
			break;
		}

	}while (flag);
}

