#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char a[100];
	char b[10][10];
	float c[10];
	int i, j, k;
	i = j = k = 0;

	scanf("%s", &a);

	for (i = 0; i < (strlen(a)); i++)
	{
		while ((isdigit(a[i])) || (((int)a[i]) == 46))
		{
			((b[j][k]) = a[i]);
			 printf("-%c- ", a[i]);
			i++;
			k++;
		}
		j++;
		k=0;
	}
	
	for (i=0; i<(j-1); i++)
	{
		c[i] = atof(b[i]);
	}
	
	

	printf("\n%s\n%s\n%s", b[0], b[1], b[2]);
	printf("\n___%lf\n%lf\n%lf", c[0], c[1], c[2]);
	return 0;
}












