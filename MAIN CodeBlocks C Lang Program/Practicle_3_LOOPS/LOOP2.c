#include <stdio.h>
int main ()
{
    int i,j,num;
    printf("Practicle 3\nQuestion 1\nName:-Jash Jani\nEnrollment Number:-92400957004\nCode 2\n");
    printf("enter the number of ROWS:");
    scanf("%d",& num);

    for (i=1;i<=num;i++)
    {
        for (j=1;j<=i;j++)
    {
        printf("%d",j);
    }
        printf("\n");
    }
    return 0;
}