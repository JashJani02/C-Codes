#include <stdio.h>

int main() {
    int arr[100], num, i, j;

     printf("Practicle 4\nQuestion 5\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    printf("Enter the number of elements of the array: ");
    scanf("%d", &num);


    for (i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    }


    for (i = 0; i < num - 1; i++) {
        for (j = i + 1; j < num; j++) {
            if (arr[i] > arr[j]) {
                int temporary = arr[i];
                arr[i] = arr[j];
                arr[j] = temporary;
            }
        }
    }

    printf("Ascending order: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");


    for (i = 0; i < num - 1; i++) {
        for (j = i + 1; j < num; j++) {
            if (arr[i] < arr[j]) {
                int temporary = arr[i];
                arr[i] = arr[j];
                arr[j] = temporary;
            }
        }
    }

    printf("Descending order: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    return 0;
}