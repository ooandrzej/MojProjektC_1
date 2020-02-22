#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct oceny
{
	char przedmiot;
	int ocena;
};

int main()
{
	char przedmiot[15][12] = {
		"Biologia",
		"Chemia",
		"J.angielski",
		"Matematyka",
		"J.polski",
		"J.rosyjski",
		"Hitoria",
		"WOS",
		"Informatyka",
		"W-F",
		"Religia",
		"EDB",
		"Fizyka",
		"Filozofia",
		"Geografia",
	};
	int ocena[15][3];
	int i, j, a, b, c;
	char *przedmiot;
	char *ocena;

	for (i = 0; i < 15; i++) //pętla
	{
		printf("Podaj ocene z przedmiotu  %s: ", przedm[i]);
		scanf("%s", &oceny[i]);
		for (a = 0; a < 5; a++)
		{
			printf("%s", oceny[i][a]);
		}
	}
	return 0;
}
