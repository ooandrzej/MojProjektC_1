#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  system("cls");

  typedef struct
  {
    char wpis[200];
    char ja[20];
    char oni[10][20];
    int agenci;
  } dane;
  dane newdr;
  int i;

  for (i = 0; i < 10; i++)
  {
    (newdr.oni[i][0] = '\0');
  }

  fgets(newdr.wpis, 200, stdin);
  sscanf(newdr.wpis, "%s %i %s %s %s %s %s %s %s %s %s %s", newdr.ja, &newdr.agenci,
         newdr.oni[0], newdr.oni[1], newdr.oni[2], newdr.oni[3], newdr.oni[4], newdr.oni[5],
         newdr.oni[6], newdr.oni[7], newdr.oni[8], newdr.oni[9]);

  printf("\n%s", newdr.ja);
  printf("\n%d", newdr.agenci);

  for (i = 0; i < 10; i++)
  {
    printf("\n%s", newdr.oni[i][0]);
  }

  return 0;
}

/* 
   New Driver's License +100 XP

   You have to get a new driver's license and you show up at the office at the 
   same time as 4 other people. The office says that they will see everyone in 
   alphabetical order and it takes 20 minutes for them to process each new
   license. All of the agents are available now, and they can each see one
   customer at a time. How long will it take for you to walk out of the office 
   with your new license?

   Task Given everyone's name that showed up at the same time, determine how
   long it will take to get your new license.

   Input Format Your input will be a string of your name, then an integer of
   the number of available agents, and lastly a string of the other four names 
   separated by spaces.

   Output Format You will output an integer of the number of minutes that it
   will take to get your license.

   Sample Input 'Eric' 2 'Adam Caroline Rebecca Frank'

   Sample Output 40

 */
