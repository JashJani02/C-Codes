/*
strcmpi stands for "Non Case-Senstive String Comparision"

syntax:strcmpi(variable1,variable2);

*/ //this aint working as properly 
#include <stdio.h>
#include <string.h>
int main ()
{
    char word1 [100], word2 [100];
    int result;

    printf("enter string1:");
    gets(word1);

    printf("enter string2:");
    gets(word2);

    result=strcmpi(word1,word2);

    if (result==0)
    {
        printf("%s and %s are equal",word1,word2);
    }

    else if (result>0)
    {
        printf("%s has more letters than %s",word1,word2);
    }

    else if (result<0)
    {
        printf("%s has less letters than %s",word1,word2);
    }

    return 0;
}