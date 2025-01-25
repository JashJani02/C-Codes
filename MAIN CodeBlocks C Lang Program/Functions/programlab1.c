#include <stdio.h>
void sum(int x,int y);
int main ()
{
    int a,b;
    
    printf("enter value of a:");
    scanf("%d",&a);
    
    printf("enter value of b:");
    scanf("%d",&b);

    sum(a,b);
    return 0;
}
void sum(int x,int y)
{
    int c;
    c=x+y;
    printf("%d",c);
}
