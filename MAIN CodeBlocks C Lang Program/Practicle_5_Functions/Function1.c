#include<stdio.h>
#include"add.h"
 int main ()
 {
    printf("Practicle 5\nQuestion 1\nName:-Jash Jani\nEnrollment Number:-92400957004\n");


    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    c= add(a,b);

    printf("%d is the sum",c);

    return 0;
 }