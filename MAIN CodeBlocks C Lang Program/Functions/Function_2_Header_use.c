#include<stdio.h>
#include "SUM_OPS.h"
int main ()
{
    int a,b,result;

    printf("enter the numbers");
    scanf("%d %d",&a,&b);

    result = sum(a,b);
    printf("%d",result);

    return 0;
}