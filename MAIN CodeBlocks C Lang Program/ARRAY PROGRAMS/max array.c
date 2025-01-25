#include <stdio.h>

int main() {
    int a, i;
    
    printf("Enter the range: ");
    scanf("%d", &a);
    
 
    int numbers[a]; 
    
   
    for (i = 0; i < a; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
   
    printf("The elements of our array are as follows:\n");
    for (i = 0; i < a; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}