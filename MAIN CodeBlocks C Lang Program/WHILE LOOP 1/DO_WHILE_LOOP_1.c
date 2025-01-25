#include <stdio.h>
int main ()
{
int a;
input:
    printf ("enter value of a:");
scanf ("%d", & a);
if (a>10)
{
    printf("number is too big\n");
    goto input;
}
do
{
printf ("%d\n", a);
a++;
}
while (a<=10);

return 0;
}
