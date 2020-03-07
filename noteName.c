#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	system("chcp 65001");
	system("cls");

	typedef strukt
	{
		int nr;
		float rednia;
		char przedmiot[12];
	}	midle;

	midle osoba1 = {12, 12.12, "Pawel"};

	printf("%ld %.2lf %s", osoba1.nr, osoba1.param, osoba1.imie);

	return 0;
}
