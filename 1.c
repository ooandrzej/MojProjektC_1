#include <stdio.h>
#include <string.h>

int main()
{
    char old[200], new[200];
    int i, j = 0;

    fgets(old, 200, stdin);

    for (i = 0; i < strlen(old); i++)
    {
        if ((old[i] != 32) && (old[i] != 10))
        {
            new[j] = old[i];
            j++;
        }
    }
    printf("\n%s", new);

    return 0;
}
