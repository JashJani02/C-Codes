#include <math.h>
int main ()
{
printf("Program of the Pythagorean Theorem\n");
float o, a, h;
int choice;
input:
printf("Type 1 or Type 2 or Type 3 as per your preference:");
scanf("%d", & choice);
switch (choice)
{
case 1:
printf("To find Hypotenuse\n");
printf("enter value of o:");
scanf ("%f", & o);
printf("enter value of a:");
scanf ("%f", & a);
h = sqrt(o*o+a*a);
if(o>h || a>h)
{
printf ("the answer will display a negative value which isn't possible for lengths");
}
else
{
printf("%.2f is the Hypotenuse for the lengths of %.2f and %.2f", h, o, a);
break;
}

case 2:
printf ("To find Opposite side:\n");
printf("enter value of Hypotenuse:");
scanf("%f", & h) ;
printf("enter value of a:");
scanf("%f", & a);
o = sqrt(h*h-a*a);
if (o>h || a>h)
{
printf("The answer will display a negative value which isn't possible for lenghts");
}
else
{
printf ("%.2f is the Opposite side for the lenghts %.2f and %.2f", o, h, a);
break;
}

case 3:
printf("To find Adjecent side:\n");
printf ("enter value of of Hypotenuse:");
scanf ("%f", & h);
printf("enter value of Opposite side:");
scanf("%f", & o);
a = sqrt(h*h-o*o);
if (h<o || h<a)
{
printf("The answer will display a Negative value which isn't possible for lengths ");
}
else
{
printf("%.2f is the Adjecent side for the lenghts %.2f and %.2f", a, h, o);
break;
}
default:
{
printf("invalid");
}
return 0;
}
}
