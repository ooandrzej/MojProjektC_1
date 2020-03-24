#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
  char wpis[200], ja[20], oni[10][20];
  int agenci = 0, i = 0, j = 0, aj = 0, b = 0, c = 0, d = 0, x = 100;
  for (i = 0; i < 10; i++)
  {
    (oni[i][0] = '\0');
  }

  scanf("%s", ja);
  scanf("%d", &agenci);
  scanf("%s", oni[0]);
  fgets(wpis, 200, stdin);
  sscanf(wpis, "%s %s %s %s %s %s %s %s %s", oni[1], oni[2], oni[3], oni[4], oni[5], oni[6], oni[7], oni[8], oni[9]);

  for (i = 0; i < 2; i++)
  {
    aj = aj + (tolower(ja[i]) * x);
    x -= 99;
  }

  for (i = 0; i < 10; i++)
  {
    b = 0;
    x = 100;
    for (j = 0; j < 2; j++)
    {
      b = b + (tolower(oni[i][j]) * x);
      x -= 99;
    }

    if ((b <= aj) && (b > 96))
    {
      c = c + 1;
    }
  }

  d = ((ceil(c / agenci)) * 20) + 20;

  printf("%d", d);
  return d;
}
