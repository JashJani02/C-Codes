#include <stdio.h>
int main()
{
int a;
input:
printf ("enter value of a:");
scanf ("%d", & a) ;

if (a>10)
{
printf ("Number is too Big\n");
goto input;
}
else if (a % 2!=0)
{
printf ("number is odd\n") ;
goto input;
}
while (a <=10)
{
if (a % 2 ==0)
{
printf ("%d\n", a) ;
}
a++;
}
return 0;
}
