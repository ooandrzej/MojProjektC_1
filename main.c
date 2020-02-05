//obzar tetowy
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b, wynik;

	printf("\npierwzy bok trojkata: ");
	scanf("%lf", &a);
	printf("drugi bok: ");
	scanf("%lf", &b);

	wynik = sqrt(((pow(a, 2)) + (pow(b, 2))));

	printf("najdluzy bok tego trojkata ma dlugoc: %f\n\n", wynik);

	return 0;
}
