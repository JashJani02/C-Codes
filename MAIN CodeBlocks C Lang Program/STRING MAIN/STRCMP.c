/*
strcmp stands for "String Comparision"

syntax: strcmp (variable1,variabe2);

*/
#include <stdio.h>
#include<string.h>
int main ()
{
    char word1[100], word2[100];
    int result;

    printf("enter string1:");
    gets(word1);

    printf("enter string2:");
    gets(word2);

    result=strcmp(word1,word2);

// the important part

    if (result==0)
    {
        printf("%s and %s are equal",word1,word2);
    }

    else if (result>0)
    {
        printf("%s has less letters then %s",word1,word2);
    }

    else
    {
        printf("%s has more letters than %s",word1,word2);
    }
    

    return 0;
}