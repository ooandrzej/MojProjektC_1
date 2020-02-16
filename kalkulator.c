#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a, b;
	char c;

	printf("\n\n\n******************** KALKULATOR *********************\n\npierwsza liczba..: ");

	scanf("%d", &a);

	printf("druga liczba..:    ");

	scanf("%d", &b);
	printf("Wpisz dzialanie [+] [-] [*] [/] ");

	scanf("%s", c);
	printf("%d %d, \n", a, b);
	printf("\n");
	

	switch (c)
	{
	case '+':
		printf("Dodawanie: %d + %d = %f", a, b, a + b);
		break;
	case '-':
		printf("Odejmowanie: %d - %d = %f", a, b, a - b);
		break;
	case '*':
		printf("Mnozenie: %d * %d = %f", a, b, a * b);
		break;
	case '/':
		b = 0 ? printf(" nie mozna dzielic przez %d", b): printf("Dzielenie: %d : %d = %f", a, b, a / b);
		break;
	};

	printf("\n\n********************** KONIEC ***********************\n");

	return 0;
}
