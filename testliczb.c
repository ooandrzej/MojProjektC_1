#include <stdio.h>

void main()

{
	double No1;
	char dalej;

	do
	{
		printf("----> wpisz znak: ");
		scanf("%d", &No1);
		printf("-----------> wpisano: %d", No1);
		printf("\a\nKoniec? (k):");
		scanf("%s", &dalej);

	} while (dalej != 'k');
}
