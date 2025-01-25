/* 2D ARRAY:-

    SYNTAX:-
    //for 1d//
    data type_array name [range] = {elements};

     //for 2d//
     data_type array name [row range] [ column range] = {elements};

     //for printing the array.Use for loop.

     initialize 2 variables for a row and a column and use them in the for loop.

     syntax for using the for loop:-
     for (int i = 0; i < row; i++)
     {
     for (int j = 0; j < column; j++)
     {
     printf("format specifier %d",array[i][j]);
    }
    printf("\n");
    */
#include <stdio.h>
int main ()
{
    int i,j;
    int a[3][3]= {100,200,300,400,500,600,700,800,900};

    /* to print this
    |100 200 300|
    |400 500 600|
    |700 800 900|
    */

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("value of a[%d] {%d} is %d\n", i,j,a[i][j]);
        }
    }

    return 0;
}