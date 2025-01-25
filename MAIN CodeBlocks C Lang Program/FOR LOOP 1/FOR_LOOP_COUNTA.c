#include <stdio.h>
int main ()
{
    int a, num;
    double l, sum;
    printf("enter number of terms  a:");
    scanf("%d", & a);
    for (l=1; l<=a; ++a)
    {

        printf("enter number");
        scanf("%d", & num);

        if (l<0.0)
        {
            continue;
        }
    }
    sum = a + l; // for calculating and counting terms

printf("Sum = %.2f", sum); // displays the terms
return 0;
}
