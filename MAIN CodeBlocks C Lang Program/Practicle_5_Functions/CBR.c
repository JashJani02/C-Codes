#include<stdio.h>
#include"CBR.h"

int main ()
{
    printf("Practicle 5\nQuestion 3\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    int y,u;

    printf("enter y and u:");
    scanf("%d %d",&y,&u);

    swap(&y,&u);

 printf("%d is the value of x and %d is the value of y",y,u);

    return 0;
}