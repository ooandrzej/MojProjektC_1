#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char itemss[100] = {'\0'}, ite[20] = {'\0'}, it[5][20] = {{'\0'}, {'\0'}, {'\0'}, {'\0'}, {'\0'}};
	int i = 0, j = 0, a = 0;

	scanf("%s", itemss);
	scanf("%s", ite);

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (((int)itemss[i] == 44) || ((int)itemss[i] == 32))
			{
				a++;
				break;
			}
			else
			{
				it[a][j] = itemss[i];
				i++;
			}
		}
		if (((int)itemss[i] == 10) || (itemss[i] == '\0'))
		{
			break;
		}
	}
	// printf("\n%s_%s_%s_%s_%s\n%s\n", it[0], it[1], it[2], it[3], it[4], ite);
	// printf("\n%d_%d_%d_%d_%d\n", ((int)(strcmp(it[0], ite))), ((int)(strcmp(it[1], ite))), ((int)(strcmp(it[2], ite))), ((int)(strcmp(it[3], ite))), ((int)(strcmp(it[4], ite))));

	for (i = 0; i < 5; i++)
	{
		((int)(strcmp(it[i], ite))) ? printf("") : printf("\n%d", ((i + 1) * 5));
	}

	return 0;
}








