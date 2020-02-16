#include <stdio.h>

char noteName[5][5];
int i;

void main()
{
	for (i = 0; i < 5; i++)
	{
		printf("%d imie: ", i + 1);
		scanf("%s", noteName[i]);
	}
	for (i = 0; i < 5; i++)
	{	puts("");
		printf(": ", noteName[i]);
	}
}
