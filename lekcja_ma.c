#include <stdio.h>

int main()
{
	char znak[100];
	int siz;
	scanf("%s", &znak);

	siz = sizeof(znak);
	printf("wielkosc = %d", siz);

	return 0;
}
