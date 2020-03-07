// this program shows number ASCI of char and CHAR of number of asci.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c[1];
	int a;
	system("cls");

	printf("\nznak: ");
	c[1] = getchar();
	printf("      %i\n", c[1]);

	printf("\nASCI: ");
	scanf("%d", &a);
	printf("      '%c'", (char)a);

	printf(" \n\n");

	return 0;
}
