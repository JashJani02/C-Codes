/*
strcat stands for "Append String"

syntax:strcat(variable1,variable2);

This function is used to join/merge two strings 

*/
#include <stdio.h>
#include <string.h>
int main ()
{
    char word1 [100], word2 [100];

    printf("enter string1:");
    gets(word1);

    printf("enter string2:");
    gets(word2);

    strcat(word1,word2);

    printf("%s is the string which will get merged and %s is the MERGED string",word2,word1);

    return 0;
}