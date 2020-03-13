#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char itemss[100], ite[20], it[5][20];
	int i, j;

	fgets(itemss, 100, stdin);
	fgets(ite, 20, stdin);

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 20; j++)
		{
			(it[i][j] = itemss[j]);
			i++;
			if (itemss[i] == ",")
			{
				break;
				// printf("\n%s", it[i]);
			}
			if (it[i] == ite)
				break;
		}
		printf(" \n--%s--%s--%s", it[0], it[1], it[2]);

	}




	// printf("\n%s", ite);

	return 0;
}
