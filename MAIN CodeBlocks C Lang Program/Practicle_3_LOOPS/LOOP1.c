#include <stdio.h>
int main ()
{
    int i,j,num;
    printf("Practicle 3\nQuestion 1\nName:-Jash Jani\nEnrollment Number:-92400957004\nCode 1\n");
    printf("enter the number of ROWS:");
    scanf("%d",& num);

    for (i=0;i<=num;i++)
    {
        for (j=0;j<=i;j++)
    {
        printf("*");
    }
        printf("\n");
    }
    return 0;
}