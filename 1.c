/*#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *clasa);
void display_course(course clasa);

int main()
{
    course cs2;
    update_course(&cs2);
    display_course(cs2);
    return 0;
}

void update_course(course *clasa)
{
    strcpy(clasa->title, "C++ Fundamentals");
    clasa->id = 111;
    clasa->hours = 12.30;
}

void display_course(course clasa)
{
    printf("%d\t%s\t%3.2f\n", clasa.id, clasa.title, clasa.hours);
}
*/
/* system example : DIR */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* system, NULL, EXIT_FAILURE */

int main()
{
    int i;
    printf("Checking if processor is available...");
    if (system(NULL))
        puts("Ok");
    else
        exit(EXIT_FAILURE);
    printf("Executing command DIR...\n");
    i = system("dir");
    printf("The value returned was: %d.\n", i);
    return 0;
}
