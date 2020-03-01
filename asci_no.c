// this program shows number ASCI of char and CHAR of number of asci.
#include <stdio.h>
#include <string.h>
#include <dos.h>

int main()
{
	char c[1];
	c[1] = 'n';
	int a;
	
if (c[1] == 'n')
{
	printf("wpisz znak: ");
	c[1] = getchar();
	printf("ASCI: %i", c[1]);
	
	printf("\nwpisz nr znaku ASCI : ");
	scanf("%d", &a);
	printf("znak nr %d to :  %c", a, (char)a);
	
	printf("\n\n  Koniec?   [t] / [n] ...: ");
	c[1] = getchar();
	//scanf("%c", &c[1]);
	gets(c);
}
	
	printf("%s", c);
	
	struct date d;
   getdate(&d);
   printf("Date is %d/%d/%d\n",d.da_day,d.da_mon,d.da_year);
   
	



	printf(" \n\nKONIEC.");
	return 0;
}









