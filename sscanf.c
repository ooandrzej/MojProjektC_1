#include <stdio.h>
#include <string.h>

float kos(char x[20]);

int main(void)
{
	char input[80], sone[20], stwo[20], sthree[20], sfour[20];
	float summ = 1;

	fgets(input, 80, stdin);
	sscanf(input, "%s %s %s %s", sone, stwo, sthree, sfour);
	// printf("\n1-%s\n2-%s\n3-%s\n4-%s\n", sone, stwo, sthree, sfour);


	summ = (kos(sone) + kos(stwo) + kos(sthree) + kos(sfour));
	printf("%.2f", (summ*1.07));
	return 0;
}



float kos(char x[20])
{
	float cena = 5;
	//printf("\n---%.2f---\n", cena);
	
	(strcmp("Nachos", x)) ? (cena = cena) : (cena = 6);
//	printf("-%.2f-\n", cena);
	(strcmp("Pizza", x)) ? (cena = cena) : (cena = 6);
//	printf("-%.2f-\n", cena);
	(strcmp("Cheeseburger", x)) ? (cena = cena) : (cena = 10);
//	printf("-%.2f-\n", cena);
	(strcmp("Water", x)) ? (cena = cena) : (cena = 4);
//	printf("-%.2f-\n", cena);
	(strcmp("Coke", x)) ? (cena = cena) : (cena = 5);
//printf("-%.2f-\n", cena);

	return cena;
}


/* 
   Nachos and Pizza cost $6.00. A Cheeseburger costs $10. Water is $4.00 and
   Coke is $5.00. Tax is 7%. */
