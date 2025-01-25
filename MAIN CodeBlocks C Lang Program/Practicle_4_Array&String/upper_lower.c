#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    printf("Practicle 4\nQuestion 10\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    char name1[100]; 
    char name2[100];

    printf("Enter your first name: ");
    gets(name1); 

    printf("Enter your last name: ");
    gets(name2); 
    
    for (int i = 0; name1[i] != '\0'; i++)
    {
        name1[i] = toupper(name1[i]);
    }

    for (int i = 0; name2[i] != '\0'; i++)
    {
        name2[i] = toupper(name2[i]);
    }

    printf("%s %s\n", name1, name2); 

  
    for (int i = 0; name1[i] != '\0'; i++)
    {
        name1[i] = tolower(name1[i]);
    }

   
    for (int i = 0; name2[i] != '\0'; i++)
    {
        name2[i] = tolower(name2[i]);
    }

 
    printf("%s %s\n", name1, name2); 

    return 0;
}