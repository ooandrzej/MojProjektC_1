#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b;
	char c;

	printf("\n\n\n******************** KALKULATOR *********************\n\npierwsza liczba..: ");

	scanf("%lf", &a);

	printf("druga liczba..:    ");

	scanf("%lf", &b);

	printf("Wpisz dzialanie [+] [-] [*] [/] ");

	scanf("%s", &c);
	printf("\n");

	switch (c)
	{
	case '+':
		printf("Dodawanie: %.2f + %.2f = %f", a, b, a + b);
		break;
	case '-':
		printf("Odejmowanie: %.2f - %.2f = %f", a, b, a - b);
		break;
	case '*':
		printf("Mnozenie: %.2f * %.2f = %f", a, b, a * b);
		break;
	case '/':
		b = '0' ? printf(" nie mozna dzielic przez %d", b) : printf("Dzielenie: %.2f : %.2f = %f", a, b, a / b);
		break;
	};

	printf("\n\n********************** KONIEC ***********************\n");

	return 0;
}
