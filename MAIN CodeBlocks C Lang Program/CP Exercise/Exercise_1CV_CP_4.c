#include<stdio.h>
int main ()
{
    int i,j,num;

    printf("enter row:");
    scanf("%d",&num);

    for (i=0;i<=num;i++)
    {
        for (j=0;j<=num;j++)
        {
            printf("%d",i);
        }

        printf("\n");
    }

    return 0;
}