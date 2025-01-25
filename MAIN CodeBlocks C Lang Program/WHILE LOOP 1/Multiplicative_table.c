#include <stdio.h>
int main()
{
    printf("Whole number multiplicative program\n");
    int i;
    int a, r;
    int m;

    printf("Enter a: ");
    scanf("%d", &a);
    if (a % a == 0)
    {
        i = 1.0;  // Initialize i to 1
        do
    {
    r = a * i;
    printf("%d*%d = %d\n", a,i,r);
    i++;  // Increment i inside the loop
    }
    while (i <= 10);
    }
    return 0.0;
}
