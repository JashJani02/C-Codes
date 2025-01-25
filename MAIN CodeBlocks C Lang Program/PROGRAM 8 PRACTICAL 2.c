#include <stdio.h>
int main ()
{   printf("Practical 2\n Question 8\n Name:- Jash Jani\n Enrollment Number:- 92400957004\n");
    int m;
    char grade;
    printf("Enter the value obtained:");
    scanf("%d", & m);

    switch (m/10)
    {
    case 10:
    case 9:
        grade='A';
        break;

    case 8:
        grade='B';
        break;

    case 7:
        grade='C';
        break;

    case 6:
        grade='D';
        break;

    default:
        grade='F';
        break;
    }
    printf("Your grade is: %c\n", grade);
return 0;
}
