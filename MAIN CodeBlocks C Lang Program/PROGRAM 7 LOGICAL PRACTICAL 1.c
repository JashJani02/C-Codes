#include <stdio.h>
int main ()
{ printf("Practical 1\n Question 7\n Name:- Jash Jani\n Enrollment Number:- 92400957004\n");
int a;
input:
printf("enter the value of a:");
scanf ("%d", & a);

if (a <10  && a %2==0)
    {
printf("%d is less than 10 and divisible by 2\n", a);
    goto input;
    }
else if (a%2!=0)
    {
    printf("%d is not divisible by 2\n", a);
    goto input;
    }
else if (a>10 && a %2==0)
    {
    printf("%d is greater than 10 and also divisible by 2\n", a);
    goto input;
    }

    return 0;
}
