#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	char wpis[60], snack[4][14];
	int i = 0, x = 0;

	for (i = 0; i < 4; i++)
	{
		(snack[i][0] = '\0');
	}

	fgets(wpis, 60, stdin);
	sscanf(wpis, "%s %s %s %s", snack[0], snack[1], snack[2], snack[3]);

	for (i = 0; i < 4; i++)
	{
		if (strcmp(snack[i], "Lettuce") == 0)
	   	{ x = x + 5; }
	  	if (strcmp(snack[i], "Carrot") == 0)
	   	{ x = x + 4; }
		if (strcmp(snack[i], "Mango") == 0)
		   { x = x + 9; }
		   printf("%s %d\n", snack[i], x);
	}
		

printf("%s", x>=10 ? "Come on Down!" : "Time to wait");

		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
