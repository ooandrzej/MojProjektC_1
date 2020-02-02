// Moja lekcja programowania

#include <stdio.h>
#include <stdlib.h>

int zmiennaA, zmiennaB;

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
	zmiennaA = 11;
	zmiennaB = 22;
	printf("wynik działania mojej funkcji: mojaFunkcja");
	printf("\nzmienna A = %i, zmienna B = %i\n", zmiennaA, zmiennaB);
}
