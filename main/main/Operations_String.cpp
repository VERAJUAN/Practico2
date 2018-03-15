#include "stdafx.h"
#include <conio.h>
#include<string>
#include <iostream>
#define STRCMP(a,b) (strcmp(a,b))
#define PRINTTEXT(text1) (cout << text1)

using namespace std;

int comp(char text1[], char text2[]) {
	return STRCMP(text1,text2);
}

int printText(char text1[]) {
	PRINTTEXT(text1);
	return 0;
}
