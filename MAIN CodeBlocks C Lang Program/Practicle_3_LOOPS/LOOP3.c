#include <stdio.h>
int main ()
{
    int  i,j,num;

    printf("Practicle 3\nQuestion 1\nName:-Jash Jani\nEnrollment Number:-92400957004\nCode 3\n");

    printf("enter the number of ROWS:");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        for (j=0;j<i;j++)
    {

        printf("%c",'A'+j);

    }

        printf("\n");
    }

    return 0;
}