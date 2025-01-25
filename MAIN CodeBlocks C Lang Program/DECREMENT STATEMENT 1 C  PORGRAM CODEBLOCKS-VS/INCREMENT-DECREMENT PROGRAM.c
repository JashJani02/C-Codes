#include <stdio.h>

int main ()
{
int a;
input:
printf("enter value of a=");
scanf ("%d", & a);
a++;
if (a<=10)
{
    printf ("%d is the updated value\n", a);
goto input;

}

else {printf("%d number is greater than 10", a);}



return 0;
}
