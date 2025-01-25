#include <stdio.h>

int main() 
{
    int a, i;

    printf("Enter the range: ");
    scanf("%d", &a);

    
    int numbers[a]; 

    for (i = 0; i < a; i++) 
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
      
        printf("You entered: %d\n", numbers[i]); 
    }

    printf("The elements of the array are as follows:\n");
    for (i = 0; i < a; i++) 
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}