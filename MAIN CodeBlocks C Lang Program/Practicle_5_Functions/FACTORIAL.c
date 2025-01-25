/*THIS IS THE SECOND PROGRAM IN SEQUENCE FOR THE "FUNCTIONS PRACTICLE"
*/

#include <stdio.h>
#include"factorial.h"
int main()
{
    printf("Practicle 5\nQuestion 2\nName:-Jash Jani\nEnrollment Number:-92400957004\n");


    int num;

    printf("enter num:");
    scanf("%d",&num);

    printf("Factorial of %d is %d\n",num,factorial(num));

    return 0;
}
