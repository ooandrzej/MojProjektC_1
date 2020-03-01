#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char transPig(char WordTo[]);

int main()
{
    char all[400];
    char nju[20][20];
    char tmp[20];
    int al, w, z, i, len;
    al = w = z = i = len = 0;
    
    for (; i<20; i++)                                          // write to all tables free end character to proppery activate table
    {
       nju[i][0] = '\0';
    }

    printf("wpisz tekst: \n");                                    // we gets a text from the user
    fgets(all, 200, stdin);
    
    for (; al < strlen(all); al++)                                // we puts a separate words to the table
    {
        nju[w][z] = all[al];
        z++;    
                
        if ((int)all[al] == 32)
        {
            nju[w][z] = '\0';
            w++;
            z=0;
        }
    }



    for (i = 0; i < w+1; i++)                                    // check new separate words in table
    {
       printf("%s", (nju[i]));
    }


// This will find the length of your string with the help of strlen() function of string.h header file
    len = strlen(nju[0]);

// iterate through each and every character of the string for printing it backwards or reverse direction
    for(i = len - 1; i >= 0; i--) 
    {
        printf("%c", nju[0][i]);
    }




    return 0;
}












