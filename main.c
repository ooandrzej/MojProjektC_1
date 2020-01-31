// Moja lekcja programowania

#include <stdio.h>
#include <stdlib.h>

int main()

{
	system("chcp 65001");
	char tex1[10] = "ZM1";
	char tex2[6] = "ZM2";

	puts("***********************");
	printf("zmienne: %s , %s", tex1, tex1);
	printf("\nWerja GCC: %d.%d.%d \n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
	puts("***********************");

	return 0;
}
