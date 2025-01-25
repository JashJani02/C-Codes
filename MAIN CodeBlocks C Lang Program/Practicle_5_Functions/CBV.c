#include <stdio.h>
#include "CBV.h"

int main() 
{
    printf("Practicle 5\nQuestion 4\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    int arr[3];
    printf("enter elements for array\n");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    printf("before swap\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("%d ", arr[i]);
    }

    swap_by_call_by_value(arr);

    printf("\nafter swap\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
