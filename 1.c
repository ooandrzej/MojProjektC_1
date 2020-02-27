#include <stdio.h>
#include <string.h>

int main()
{
    char all[100];
    char a[20], b[20], c[20], d[20], e[20];
    int i, j;

    puts("podaj napis");
    scanf("%s", &a);

    for (i = 1; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }
    printf("%cay", a[0]);
    return 0;
}
