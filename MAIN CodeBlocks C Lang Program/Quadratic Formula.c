#include <stdio.h>
#include <math.h>
int main ()
{
float a,b,c,d,y,z;
printf("enter the term of x^2:");
scanf("%f", & a);
printf("enter the term of x:");
scanf("%f", & b);
printf("enter the value of constant:");
scanf("%f", & c);
d = sqrt(b*b-4*a*c);
y = (-b + sqrt(d))/(2 * a);
z = (-b - sqrt(d))/(2 * a);
printf("our first zero of our equation is %.2f \n",y);
printf("our second zero of our equation is %.2f \n",z);
return 0;
}
