#include <stdio.h>

int main()
{
    int a;
    float b;
    char q;

    printf("Practical 1\n Question 2\n Name:- Jash Jani\n Enrollment Number:- 92400957004\n");
    printf("enter value of a:");
    scanf("%d", &a);
    printf("enter value of b:");
    scanf("%f", &b);
    printf("enter a letter:");
    scanf(" %c", &q);

    printf("%d is your selected value\n", a);
    printf("%.2f is your selected value\n", b);
    printf("%c is your given letter\n", q);

    return 0;
}
