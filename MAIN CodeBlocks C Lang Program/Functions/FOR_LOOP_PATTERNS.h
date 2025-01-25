/*this function will print the below pattern
1
22
333
4444*/
#include<stdio.h>
void RIGHTTRIANGLE1(int num)
{

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d",i);
        }

        printf("\n");
    }
}

/*this function will print the below
0
01
012
0123
01234
*/
 void RIGHTTRIANGLE2(int num)
{
     for (int i=0;i<=num;i++)
    {
        for (int j=0;j<i;j++)
        {
                printf("%d",j);
        }

        printf("\n");
    }
}
/*this will print the following
*
**
***
*****/
void RIGHTTRIANGLE3(int num)
{
    for (int i=0;i<=num;i++)
    {
        for (int j=0;j<=i;j++)
    {
        printf("*");
    }
        printf("\n");
    }
}

/*this will print the following
1
12
123
1234*/
void RIGHTTRIANGLE4(int num)
{
     for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i;j++)
    {
        printf("%d",j);
    }
        printf("\n");
    }
}

/*this will print the following
A
AB
ABC
ABCD
*/

void RIGHTTRIANGLE5(int num)
{
    for (int i=1;i<=num;i++)
    {
        for (int j=0;j<i;j++)
    {

        printf("%c",'A'+j);

    }

        printf("\n");
    }
}



/*this pattern is for the given below
         *
     *   *
*    *   *
*/
void LeftRTriangle1 (int num)
{
    for (int i = 1; i <= num; i++) {
        
        for (int j = i; j < num; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/*this pattern is for the given below
        1
    2   1
3   2   1
*/
void LeftRTriangle2 (int num)
{
    for (int i = 1; i <= num; i++) 
    {
        
        for (int j = i; j < num; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

/*this function is for the following pattern
        A
    B   A
C   B   A
*/
void LeftRTriangle3 (int num)
{
    for (int i = 1; i <= num; i++) 
    {
        
        for (int j = i; j < num; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
}

/*this function is for the following pattern
                    *
                *       *
            *       *       *
*/

void EQUIVITRIANGLE1 (int num)
{
    for (int i = 1; i <= num; i++) {
        
        for (int j = i; j < num; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*this pattern is for even sequence for *


    *   *
*   *   *   *

*/
void EQUVITRIANGLE2(int num)
{
    for (int i = 1; i <= num; i+=2) {
        
        for (int j = i; j < num; j++) {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/*this function is for the following pattern
                
                1
            1       2
        1       2       3
*/

void EQUIVITRIANGLE3 (int num)
{
     for (int i = 1; i <= num; i++) 
    {
        
        for (int j = i; j < num; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*this function is for the following pattern
    
                A
            A       B
        A       B       C
*/

void EQUIVITRIANGLE4 (int num)
{
    for (int i = 1; i <= num; i++) 
    {
        
        for (int j = i; j < num; j++) 
        {
            printf(" ");
        }
        
        for (int j = 0; j < i; j++) 
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}