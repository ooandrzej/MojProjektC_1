//obzar tetowy
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b;
	char dzialanie;

	printf("\n\n\n\n\n\n\n*********************\nKALKULATOR\n*********************\n\n\n");
	printf("pierwsza liczba:.. ");
	scanf("%lf", &a);
	printf("DZIALĄNIE: ******     + dodawanie,  - odejmowanie,  * mnozenie,  / aby podzielic     ******\n");
	scanf("%lc", dzialanie);
	printf("druga liczba:.. ");
	scanf("%lf", &b);
	printf("***********************************");

	switch (dzialanie)
	{
	case '+':
		printf("%f + %f = %f", a, b, a + b);
		break;
	case '-':
		printf("%f + %f = %f", a, b, a - b);
		break;
	case '*':
		printf("%f + %f = %f", a, b, a * b);
		break;
	case '/':
		printf("%f + %f = %f", a, b, a / b);
		break;
	};

	printf("\nKONIEC\n");

	return 0;
}
