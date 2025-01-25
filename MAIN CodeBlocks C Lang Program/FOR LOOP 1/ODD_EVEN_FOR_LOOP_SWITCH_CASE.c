#include <stdio.h>
int main ()
{
int a, choice;

printf("Switch Case Program with For Loop\nType 1 for printing an Odd Sequence\nType 2 for printing an Even Sequence\nEnter your Choice");
scanf("%d", & choice);

switch (choice)
{
    case 1:
    {
printf("enter value of a:");
scanf("%d", & a);

for (a=0; a<=10; a++)
{
    if (a%2!=0)
    {
        printf("%d\n", a);
    }
    }
    break;
    }
    case 2:
    {
        printf("enter the value of a:");
        scanf("%d", a);
        
for (a=0; a<=10; a++)
{
    if (a%2==0)
    {
        printf("%d\n", a);
    }
}
    break;
    }
}

    return 0;
}