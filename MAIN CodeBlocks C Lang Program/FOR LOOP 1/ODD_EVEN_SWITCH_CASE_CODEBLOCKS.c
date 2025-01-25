#include <stdio.h>
int main ()
{
int a, choice;
printf("Type 1 for selecting odd sequence\n Type 2 for selecting even sequence\n Enter your choice:");
scanf("%d", & choice);

printf("enter value of a:");
scanf("%d", & a);

switch(choice)
{
    case 1:
{for (a=0; a<=10; a++)
{
    if (a%2!=0)
    {
        printf("%d\n", a);
    }
} break;
}

    case 2:
    {
        for (a=0; a<=10; a++)
        {
            if (a%2==0)
            {
                printf("%d\n", a);
            }
        }
    }
}
return 0;
}
