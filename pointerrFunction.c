#include <stdio.h>
void suma(int a, int b);

int main()
{

    int a, b;
    printf("wprowadz 2 liczby: ");
    scanf("%d%d", &a, &b);

    int (*pointer)(int, int);
    pointer = *suma;

    pointer(a, b);
    return 0;
}

void suma(int a, int b)
{
    int i, j;
    j = 'k';
    for (i = 6; i > 1; i--)
     {   puts("");
    
        for (j = 1; j < 3; j++)
        {
            printf("suma to %d: ", a + b);
        }
    }
}
