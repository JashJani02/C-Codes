#include <stdio.h>
int main ()
{
    int a;
    input:
        printf("enter value of a:");
        scanf("%d", & a);
    if (a %2==0)
    {
        do
        {
            printf("%d\n", a);
            a++;

        }
         while (a<=10);
    }
    else if (a %2!=0)
        {
            do
        {
            printf("%d\n", a);
            a++;

        }
         while (a<=10);
        }
return 0;
}
