#include<stdio.h>
#include"FOR_LOOP_PATTERNS.h"
int main ()
{
    int num;

    printf("enter rows:");
    scanf("%d",&num);

    RIGHTTRIANGLE1(num);
    printf("\n***********\n");
    RIGHTTRIANGLE2(num);
    printf("\n***********\n");
    RIGHTTRIANGLE3(num);
    printf("\n**********\n");
    RIGHTTRIANGLE4(num);
    printf("\n********\n");
    RIGHTTRIANGLE5(num);

printf("\n*********************************\n");


    LeftRTriangle1(num);
    printf("\n***********\n");
    LeftRTriangle2(num);
    printf("\n***********\n");
    LeftRTriangle3(num);

printf("\n*********************************\n");

    EQUIVITRIANGLE1(num);
    printf("\n*********\n");
    EQUIVITRIANGLE3(num);
    printf("\n*********************************\n");
    EQUIVITRIANGLE4(num);
    printf("\n*********************************\n");

    return 0;
}