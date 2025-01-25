#include <stdio.h>
int main ()
{
int a;
float b;
char c;
printf("enter value of a:");
scanf("%d", & a);
printf("enter value of b:");
scanf("%f", & b);
printf("enter an initial:");
scanf(" %c",& c);

printf("%d\n%.2f\n%c", a,b,c);
return 0;
}
