#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j;
	char napi[1][29];
	char PigLatin[1][29];

	scanf("%s", &napi);
	j = strlen(napi);
	printf("\n%s : %d\n", napi, j);


	for (i = 1; i < j; i++)
	{
		printf("test %s: \n", napi[1][i]);
	}

	return 0;
}

// -ay
