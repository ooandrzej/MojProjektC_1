// program pokazuje która liczba jest największa
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int a,b,c,d,e;
	printf("wpisz 3 liczby");
	scanf("%d %d %d", &a, &b, &c);
	
(a > b) ? (d=a) : (d=b);
(b > c) ? (e=b) : (e=c);

printf("najwieksza jest %d", (d>e) ? d : e);	

	return 0;	
}