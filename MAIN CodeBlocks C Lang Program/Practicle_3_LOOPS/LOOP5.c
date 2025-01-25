#include <stdio.h>

int main() 
{
    int num, i, j;

      printf("Practicle 3\nQuestion 2\nName:-Jash Jani\nEnrollment Number:-92400957004\nCode 2\n");

    
     printf("enter the number of ROWS:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) 
    {
        
        for (j = i; j < num; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}