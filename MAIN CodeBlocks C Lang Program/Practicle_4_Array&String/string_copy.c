#include<stdio.h>
#include<string.h>
int main ()
{
       printf("Practicle 4\nQuestion 9\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    char name1[100]; char name2[100];

    printf("enter your first name:");
    gets(name1);

    printf("enter your last name:");
    gets(name2);

    printf("hi %s %s, below given is an instance of the function strcpy.\n",name1,name2);
    printf("%s %s",strcpy(name2,name1));

    return 0;
}