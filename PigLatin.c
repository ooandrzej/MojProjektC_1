#include <stdio.h>
#include <string.h>

int main()
{
	char pig[100];
	int i, j;
	i = j = 0;

	system("cls");
	fgets(pig, 100, stdin);

	for (i = 1; i < strlen(pig) + 1; i++)
	{

		if ((int)pig[i] == 32)
		{
			printf("%c%s", pig[j], "ay");
			j = i + 1;
		}

		if ((int)pig[i] == 10)
		{
			printf("%c%s", pig[j], "ay");
		}

		else
		{
			printf("%c", pig[i]);
			if ((int)pig[i] == 32)
			{
				i++;
			}
		}
	}

	return 0;
}
