#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	// definiownie zmiennych
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
	int ocena[15][12];
	float mid[12];
	int i, j, o, p;


	// wypełnienie tablicy: ocena[][] i mid[] wartością domyślną = 0
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 12; j++)
			ocena[i][j] = 0;
		mid[j] = 0;
		{
		}
	}

	// pobieranie ocen od użytkownika - 0 przechodzi do następnego rzędu
	// tablicy czyli następnnego przedmiotu
	for (p = 0; p < 15; p++)
	{
		for (o = 0; o < 12; o++)
		{
			printf("%s, ocena nr_%d: ", przedmiot[p], o + 1);
			scanf("%d", &ocena[p][o]);
			if (ocena[p][o] > 6)
			{
				printf("nie ma oceny %d: ", ocena[p][o]);
				o--;
			}
			if (ocena[p][o] < 1)
				break;
			mid[p] += ocena[p][o];
			printf(" mid%d = %.2f\n", p, mid[p]);
		}
	}


	// kontrolne wyświetlenie zapisanych ocen w tablicy: ocena[][]
	printf("\n\n*** podsumowanie wszystkich zdobytych ocen ***\n");
	for (i = 0; i < 15; i++)
	{
		if (ocena[i][0] >= 1)
			printf("\n%s: ", przedmiot[i]);

		for (j = 0; j < 12; j++)
		{
			if ((ocena[i][j]) >= 1)
				printf("%d ", ocena[i][j]);
			else
				break;
		}
	}

	// zatrzymanie wyświetlanego okna aby sie nie zamknęło, Enter zamknie
	// okno 
	printf("\n\n ***  KONIEC -> [wpisz cos + ENTER] ***");
	scanf("%s", &p);

	return 0;
}
