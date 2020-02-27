#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
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
