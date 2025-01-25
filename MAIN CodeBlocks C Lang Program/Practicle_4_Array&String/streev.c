#include<stdio.h>
#include<string.h>
int main()
{
    printf("Practicle 4\nQuestion 8\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    char name1[100];
    char name2[100];

    printf("enter your first name:");
    gets(name1);

    printf("enter your last name:");
    gets(name2);

    printf("hi %s %s,below given is your name in reverse\n",name1,name2);
    printf("%s %s",strrev(name1),strrev(name2));

    return 0;

}