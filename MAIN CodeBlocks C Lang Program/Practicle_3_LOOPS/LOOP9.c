#include <stdio.h>
int main ()
{

    int i,j,num;

    printf("Practicle 3\nQuestion 3\nName:-Jash Jani\nEnrollment Number:-92400957004\nCode 3\n");

   
     printf("enter the number of ROWS:");
    scanf("%d", &num);

printf("\nLetter Pattern:\n");
    for (i = 1; i <= num; i++) 
    {
        
        for (j = i; j < num; j++) {
            printf(" ");
        }
        
        for (j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}