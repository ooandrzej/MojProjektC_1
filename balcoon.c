int main() 
{
int a, b, c, d;
a=b=c=d=0;



scanf("%d,%d", &a, &b);
scanf("%d,%d", &c, &d);

((a*b)>(c*d)) ? puts("is A") : puts("");
((a*b)<(c*d)) ? puts("is B") : puts("");
((a*b)==(c*d)) ? puts("is A is B") : puts("");





    return 0;
}