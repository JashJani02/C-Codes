#include <stdio.h>
int main ()
{ printf("Practical 1\n Question 6\n Name:- Jash Jani\n Enrollment Number:- 92400957004\n");
int a;
printf("enter value of a:");
scanf("%d", & a);
if (a<=10)
{
do
    {
printf("%d\n", a);
a++;
    }
while (a<=10);
}
else if (a>=11)
{
    do
        {
        printf("%d\n", a);
    a--;
        }
    while (a>=10);
}
return 0;
}
