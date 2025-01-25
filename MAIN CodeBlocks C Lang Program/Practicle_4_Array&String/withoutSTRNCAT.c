#include<stdio.h>

int main()
{
    printf("Practicle 4\nQuestion 7\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    char name1[50];
    char name2[50]; 

    printf("enter your first name: ");
    gets(name1); 

    printf("enter your last name: ");
    gets(name2);

    int i, j;

   
    for (i = 0; name1[i] != '\0'; i++);

   
    for (j = 0; name2[j] != '\0'; j++)
    {
        name1[i + j] = name2[j];
    }
    name1[i + j] = '\0'; 

    printf("%s\n", name1);

    return 0;
}