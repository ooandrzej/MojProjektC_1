#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float oneRoll = (60 * 12 * 2);
	float hd = 1, wd = 1, needRoll = 1;
	scanf("%f", &hd);
	scanf("%f", &wd);

	needRoll = ((hd * 12 * wd * 12) * 2) / oneRoll;

	printf("%.f",  ceil(needRoll));
	return 0;
}