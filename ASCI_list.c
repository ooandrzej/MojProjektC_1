// this program shows number ASCI of char and CHAR of number of asci.
#include <stdio.h>

int main()
{
	int i;

	for (i = 1; i <= 128; i++)
	{
		printf("%d == %c\n", i, (char)i);
	}










	return 0;
}
