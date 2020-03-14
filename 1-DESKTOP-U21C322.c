#include <stdio.h>
#include <string.h>

int main()
{
    char all[400] = {'\0'}, nju[20][20] = {{'\0'}, {'\0'}};
    int i = 0, j = 0, k = 0;

    printf("wpisz tekst: "); //we gets a text from the user
    gets(all);

    for (i = 0; i < 20; i++) //we puts a separate words to the tables
    {
    nowy:
        for (j = 0; j < 20; j++)
        {
            for (; k < 400; k++)
            {
                if ((int)all[k] == 32)
                {
                    k++;
                    j = 0;
                    goto nowy;
                }
                nju[i][j] = all[k];
                j++;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%c\n", nju[i]);
    }

    return 0;
}
