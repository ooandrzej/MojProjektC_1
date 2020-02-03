/* Moja lekcja programowania*/

#include <stdio.h>
#include <stdlib.h>

int zmienna1, zmienna2, zmienna3;
zmienna3 = 100;

int main()

{
	zmienna1 = 3;
	zmienna2 = 7;

	zmienna1 == 3 ? puts("zmienna nr1 dokladnie = 3") : puts("zmienna nie równa ię 3");
	printf("-suma tych zmiennych wynoi: %i", zmienna1 + zmienna2);
	printf("\n-mojaFuunkcja zwraca wartość: %i", myFuunc());
	
	return 0;
}

int myFuunc()
{
	return zmienna3;
}