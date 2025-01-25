#include <stdio.h>

int main ()

{
    float a;

    printf ("Enter the value of the number =");
    scanf ("%f", & a);

if (a==0)
{
    printf ("%.2f is a whole number", a);
}
else if (a>0)
{
    printf ("%.2f is a positive number", a);
}

 else
{
 printf ("%.2f is a negetive number", a);
}
 return 0;
}
