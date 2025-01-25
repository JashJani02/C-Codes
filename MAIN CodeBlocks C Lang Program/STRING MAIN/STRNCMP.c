/*

strncmp is used to compare 'n' letters of a string

THIS FUNCTION IS CASE-SENSITIVE!

syntax: strncmp(variable1,variable2,n);

*/
#include <stdio.h>
#include <string.h>

int main ()
{
    int a,result;
    char word1 [100], word2 [100];

    printf("enter string1:");
    gets (word1);

    printf("enter string2:");
    gets (word2);

    printf("enter number of letters to compare:");
    scanf("%d", & a);

    result=strncmp(word1,word2,a);

    if (result==0)
    {
        printf("%s and %s are equal till %d letters",word1,word2,a);
    }

    else if (result>0)
    {
        printf("%s has more letters than %s by %d letters",word1,word2,a);
    }

    else 
    {
        printf("%s has less letters than %s by %d letters",word1,word2,a);
    }

    return 0;
}