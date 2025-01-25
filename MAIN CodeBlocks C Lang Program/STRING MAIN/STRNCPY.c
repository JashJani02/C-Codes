/*
strncpy stands for "N times String copy (i guess)"
//this function copies the number of characters of the second string to the first string (i think)
syntax:(variable1,variable2,n)

//n: is an integer
*/
//doubt: PURPOSE?! and i dont think that this has executed as per the manner it has to.
#include <stdio.h>
#include <string.h>

int main ()
{
    char text1 [100], text2[100];
    int a;

    printf("enter string1:");
    gets (text1);

    printf("enter string2");
    gets(text2);

    printf("enter a number:");
    scanf("%d", & a);

    strncpy(text1,text2,a);

    printf("string1 is:%s\nstring2 is:%s",text1,text2);

    return 0;
}