// program 
#include <stdio.h>

int main()

{
	char c;
	printf("wpisz znak: ");
	scanf("%c", &c);
	printf("ASCI: %i", (int)c);

int a;
printf("\nwpisz nr znaku w tablicy ASCI : ");
scanf("%d", &a);
printf("znak nr %d to :  %c", a, (char)a);

	return 0;

}

