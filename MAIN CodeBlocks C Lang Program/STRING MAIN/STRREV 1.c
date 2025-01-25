/*
 strrev stands for "Reverse String", 
 
   strrev is a function that takes a string as input and returns the reversed string.

 syntax: strrev(variable name);
 
 in our below program, the output displays the reverse word of a user given input
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    char text [100];
    printf("enter a string:");
    gets (text);

    strrev (text);

    printf("%s",text);

    return 0;
}