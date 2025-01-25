#include <stdio.h>

int main() 
{

    printf("Practicle 4\nQuestion 1\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

 
    int array[size];

    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Elements in the array with range %d is as below:\n",size);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}