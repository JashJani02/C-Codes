/*functions or methods
1.built-in functions like:-printf,scanf 
2. user defined functions such as a is_palindrome function

1 declaration
2 defination
3 function call
syntax: data type function name; (argument1,argument2)
{
    return data type;
}

function name ()

int sum (int x,float b);
{
    int c;
    c=a+b;
    return c;
    sum (x,y);
}*/


#include <stdio.h>
int add (int x,int y);
int main ()
{
    int a,b,result;
    printf("enter values a and b:");
    scanf("%d %d",&a,&b);
    result= add(a,b);
    printf ("%d", result);
    return 0;
}
int add (int x,int y)
{
    int z;
    z=x+y;
    return z;
}