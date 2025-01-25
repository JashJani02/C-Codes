/*

strncmpi stands for Non Case Sensitive string comparision

This function comparises 'n' letters from both strings.

syntax:strncmpi(variable1,variable2,n);

*/
#include <stdio.h>
#include <string.h>

int main ()
{

char word1[100],word2[100];
int a,result;

printf("enter string1:");
gets(word1);

printf("enter string2:");
gets(word2);

printf("enter the number of letters to compare");
scanf("%d", & a);

result=strncasecmp(word1,word2,a); //strncmpi was replaced with the strncasecmp syntax

if (result==0)
{
    printf("%s and %s are same till %d letters",word1,word2,a);
}

else if (result>0)
{
    printf("%s is greater than %s by %d letters",word1,word2,a);
}

else 
{
    printf("%s is less than %s by %d letters",word1,word2,a);
}

return 0;
}