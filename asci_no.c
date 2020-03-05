// this program shows number ASCI of char and CHAR of number of asci.
#include <stdio.h>
#include <string.h>

int main()
{
	char c[1];
	int a;
	system("cls");

	printf("-------------\nznak: ");
	c[1] = getchar();
	printf("%c == %i", c[1], c[1]);

	printf("\nnr ASCI: ");
	scanf("%d", &a);
	printf("%d == %c", a, (char)a);

	printf(" \n-------------\n");



	return 0;
}
