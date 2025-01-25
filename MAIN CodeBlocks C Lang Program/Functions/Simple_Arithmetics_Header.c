#include <stdio.h>

float sum(float x,float y)
{
    float z;
    z=x+y;
    printf("%.2f",z);
    return z;
}

float difference(float x, float y)
{
    float z;
    z=x-y;
    printf("%.2f",z);
    return z;
}

float product(float x,float y)
{
    float z;
    z=x*y;
    printf("%.2f",z);
    return z;
}

float quotient(float x,float y)
{
    float z;
    z=x/y;
    printf("%.2f",z);
    return z;
}
int main ()
{
    float a,b,result;
    int choice;

    printf("choose the operations of '+','-','*','/' and by typing b/w 1-5:");
    scanf("%d",&choice);
   printf("enter value of a:");
   scanf("%f",&a);
   printf("enter value of b:");
   scanf("%f",&b);

    

    switch (choice)
    {
        case 1:
        {   
            result = sum(a,b);
            printf("%.2f",result);
        }

        case 2:
        {
            result= difference(a,b);
            printf("%.2f",result);
        }

        case 3:
        {
            result =product(a,b);
            printf("%.2f",result);
        }
        case 4:
        {
            result =quotient(a,b);
            printf("%.2f",result);
        }

    }

    return 0;
}