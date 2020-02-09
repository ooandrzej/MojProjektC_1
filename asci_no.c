#include <stdio.h>

int main()

{
	char c;
	printf("znak: ");
	scanf("%lc", &c);
	c = (int)c;
	printf("ASCI: %i", c);

	return 0;
}

