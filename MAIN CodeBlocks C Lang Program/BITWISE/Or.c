#include <stdio.h>

int main() {
    int a; 
    int b;  
    printf("enter for a and b:");
    scanf("%d %d",&a,&b);
    int result = a | b; 
    printf("Bitwise OR: %d | %d = %d\n", a, b, result);
    return 0;
}   