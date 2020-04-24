#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
			i++;
			k++;
		}
		j++;
		k=0;
	}
	
	for (i=0; i<(j); i++)
	{
		c[i] = (float)(atof(b[i]));
	}
	
	

	printf("\n%s %s %s", b[0], b[1], b[2]);
	printf("\n%f %f %f %.2f", c[0], c[1], c[2], (c[0]+c[1]+c[2]));
	return 0;
}












