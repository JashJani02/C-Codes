#include<stdio.h>
#include"add.h"
 int main ()
 {
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    c= add(a,b);

    printf("%d is the sum",c);

    return 0;
 }