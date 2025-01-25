#include<stdio.h>
int main ()
{
 int marks;
 input:
 printf("enter marks acquired by student:");
 scanf("%d",&marks);

 switch (marks/10)
 {  
    
    if (marks>30)

    {
    case 10:
    case 9:
    {
        printf("execellent");
        break;
    }

    case 7:
    {
        printf("good");
        break;
    }

    case 6:
    {
        printf("nice");
        break;
    }

    case 5:
    {
    printf("work hard");
    break;
    }

    case 4:
    {
        printf("need improvement");
        break;
    }

    case 3:
    {
        printf("barely");
    }

    }  

    else 
    {
        printf("you havent passed");
        break;
    }  
        default:{printf("invalid\n");
        goto input;
    }
 }
 return 0;
}