// this program shows number ASCI of char and CHAR of number of asci.
#include <stdio.h>

int main()
{
	char c[1];
	int a;

	printf("wpisz znak: ");
	scanf("%c", &c[1]);
	printf("ASCI: %i", (int)c[1]);
	printf("\nwpisz nr znaku w tablicy ASCI : ");
	scanf("%d", &a);
	printf("znak nr %d to :  %c", a, (char)a);
	printf("\n\n    Koniec?   [t] / [n] ...: ");
	scanf("%c ", &c[1]);
	printf("\n%c", c[1]);
	// if (c == 't')



	printf(" \n\nKONIEC.");
	return 0;
}




















