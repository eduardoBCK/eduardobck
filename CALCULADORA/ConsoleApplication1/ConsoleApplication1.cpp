// ConsoleApplication4.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>



int somarvalores(int x, int y)
{
	int c;
	c = x + y;
	return c;

}

int diminivalores(int w, int a)
{
	int d;
	d = w - a;
	return d;

}
float dividirvalores(float x, float y)
{
	float e;
	e = x / y;
	return e;

}
int multiplicarvalores(int x, int y)
{
	int o;
	o = x * y;
	return o;

}

int lernumerointeiro()
{
	printf("\n favor digitar um numero inteiro:");
	int numero;
	scanf_s("%i", &numero);
	return numero;
}


int main()


{
	int primeirovalor = lernumerointeiro();
	int segundovalor = lernumerointeiro();
	int c = somarvalores(primeirovalor, segundovalor);
	int d = diminivalores(primeirovalor, segundovalor);
	float e = dividirvalores(primeirovalor, segundovalor);
	int o = multiplicarvalores(primeirovalor, segundovalor);
	printf("resultado da soma:  %i \n", c);
	printf("resultado da subtracao:  %i \n", d);
	printf("resultado da divisao:  %f \n", e);
	printf("resultado da multiplicacao:  %i \n", o);



	system("pause");
}
