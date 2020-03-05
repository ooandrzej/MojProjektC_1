#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char transPig(char WordTo[]);

int main()
{
    char all[400];
    char nju[20][20];
    char tmp[1];
    int al, w, z, i, j, len;
    al = w = z = i = j = len = 0;

    printf("wpisz tekst: "); // we gets a text from the user
    fgets(all, 200, stdin);

    for (; al < strlen(all); al++) // we puts a separate words to the table
    {
        nju[w][z] = all[al];
        z++;

        if ((int)all[al] < 65 && (int)all[al] > 122)
        {
            nju[w][z] = '\0';
            w++;
            z = 0;
        }
    }

    for (i = 0; i < w + 1; i++)
    {
        len = strlen(nju[i]);
        tmp[0] = nju[i][0];
        for (j = 1; j < len; j++)
        {
             if ((int)nju[i][j] < 65 && (int)nju[i][j] > 122)
            // printf("%c", nju[i][j]);
            {
                break;
            }
        
            else
        
            {
                nju[i][j - 1] = nju[i][j];
                nju[i][j] = tmp[0];
            }
        }
        // printf("%c", tmp[0]);
        printf("%say", nju[i]);
    }
    return 0;
}
