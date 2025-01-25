/*strlen function

    strlen stands for "String Lenght" which counts the numbers of letters present in a string

    syntax:     strlen (variable name);

*/

#include <stdio.h>
#include <string.h>
int main ()
{
char ch[100];
int lenght;

puts("enter a string:");
gets(ch);

lenght = strlen(ch);

printf("Letters present in %s are %d",ch,lenght);

return 0;
}
