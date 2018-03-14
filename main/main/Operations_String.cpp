#include "stdafx.h"
#include <conio.h>
#include<string>
#include <iostream>

using namespace std;

int comp(char palabra1[], char palabra2[]) {
	return strcmp(palabra1, palabra2);
}

int printText(char text1[]) {
	cout << text1;
	return 0;
}
