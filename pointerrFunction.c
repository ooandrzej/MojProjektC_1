//program that presents run function by pointer
#include <stdio.h>

void suma(int a, int b);

int main()
{

    int a, b;
    printf("\nwprowadz 2 liczby\n: ");
    scanf("%d%d", &a, &b);

    void (*pointer)(int, int);
    pointer = suma;

    pointer(a, b);
    return 0;
}

void suma(int a, int b)
{
    int i, j;
    for (i = 6; i > 1; i--)
    {
        puts("");

        for (j = 1; j < 3; j++)
        {
            printf("suma to %d: ", a + b);
        }
    }
}
