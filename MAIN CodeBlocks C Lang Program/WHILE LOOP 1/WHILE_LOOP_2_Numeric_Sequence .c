#include <stdio.h>
int main ()
{
int a;
input:
    printf("enter the value of a");
    scanf ("%d", & a);

if (a>10)
    {
    goto input;
    }

while(a<=10)
{
    if (a<=10)
    {
        printf ("%d \n ",  a);
    }
    a++;
}
return 0;
}
