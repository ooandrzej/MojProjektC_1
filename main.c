// Moja lekcja programowania

#include <stdio.h>
#include <stdlib.h>

int zmiennaA, zmiennaB;
zmiennaA = 10;
zmiennaB = 20;

int main()
{
	zmiennaA = 11;
	zmiennaB = 22;

	printf("\nzmienna A = %i, zmienna B = %i\n", zmiennaA, zmiennaB);
	mojaFunkcja();
	return 0;
}

int mojaFunkcja()
{
	puts("wynik działania mojej funkcji: mojaFunkcja");
	printf("\nzmienna A = %i, zmienna B = %i\n", zmiennaA, zmiennaB);
}