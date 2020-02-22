#include <stdio.h>

int main()

{
	
	char *tab[] = {
"niedostateczna",
"mierna",
"dostateczna",
"dobra",
"bardzo dobra",
" celująca",
"bledna ocena"	};
int a;
	
	printf("wpisz ocene: ");
	scanf("%d", &a);
	
	printf(" ocena: %s", tab[a-1]);
	
return 0;	
}


















