/*

strncat is used for merging 'n' number of characters to a string

syntax:strncat(variable1,variable2);

*/
#include <stdio.h>
#include<string.h>

int main ()
{
    int a;
    char word1 [100], word2 [100];

    printf("enter string1:");
    gets(word1);

    printf("enter string2:");
    gets(word2);

    printf("enter number of letters to merge:");
    scanf("%d", & a);

    strncat(word1,word2,a);

    printf("%s is the word in which %s's %d letters  will get merged",word1,word2,a);

    return 0;
}