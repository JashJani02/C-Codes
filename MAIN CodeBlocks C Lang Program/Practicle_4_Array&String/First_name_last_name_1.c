#include<stdio.h>
#include<string.h>
int main ()
{
    printf("Practicle 4\nQuestion 6\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    char first_name[100]; char last_name [100];

    printf("enter your first name:");
    gets(first_name);

    printf("enter your last name:");
    gets(last_name);

    printf("There are %d letters in your first name\nThere are %d letters in your last name",strlen(first_name),strlen(last_name));

    return 0;
}