// this program shows number ASCI of char and CHAR of number of asci.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int milliseconds);

int main()
{
	char c[1];
	int a;
	system("chcp 65001");
	system("cls");

	printf("\nznak: ");
	c[1] = getchar();
	printf("      %i\n", c[1]);

	printf("\nASCI: ");
	scanf("%d", &a);
	printf("      '%c'", (char)a);

	printf(" \n\n");
	printf("Program się zamknie za 5 sek...\n");
	delay(5000);

	return 0;
}

void delay(int milliseconds)
{
	long pause;
	clock_t now, then;

	pause = milliseconds * (CLOCKS_PER_SEC / 1000);
	now = then = clock();
	while ((now - then) < pause)
		now = clock();
}
