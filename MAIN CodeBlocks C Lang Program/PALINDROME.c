#include <stdio.h>
#include <string.h>
//take "is_palindrome" function//
int is_palindrome (char str[])
{
    int f = 0; // declaring+initializing of the word's first letter//
    int l = strlen(str) - 1; // declaring + initializing of the word's last letter//

    while (f<l) //we use "while" function to compare the letters
    {
        if (str[f]!= str[l])
        {
            return 0;
        }
        f++;
        l--;
        //the increment and decrement functions are used so the "is_palindrome" function loop's comparision meets at the middle letter//
     }
return 1; // by this return statement we conclude that the "is_palindrome" function stands true//
}

int main () // from here we use the standard functions for taking a "Word"//
{
char word [100];
printf("enter a word to check whether it is a Palindrome or not: ");
scanf("%s", word);

if (is_palindrome (word))
{
    printf("%s is a Palindrome", word);
}
else
{
    printf("%s is not a Palindrome", word);
}
return 0;
}
