/*

strcpy stnads for "String Copy"

used to copy a string to another

syntax: strcpy(variable1,variable2);

*/
#include <stdio.h>
#include <string.h>

int main ()

{
    char text1 [100], text2 [100];

    printf("Enter a word:");
    gets(text1);

    printf("Enter an another word:");
    gets(text2);

    strcpy (text1,text2);

    printf("This was word which the user entered the first time: %s\nThis is the word which got replaced by:%s", text1,text2);

    return 0;
}