#include<stdio.h>
int main ()
{

    printf("Practicle 4\nQuestion 2\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    int row,column;
input:
    printf("enter the number of rows:");
    scanf("%d",&row);

    printf("enter the number of columns:");
    scanf("%d",&column);

    if (row<1 || column<1 || row<1 && column<1)
    {
        printf("invalid input");
        goto input;
    }

    int arr[row][column];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("enter number %d %d:\n",i,j);
            scanf("%d",&arr[i][j]);
        }

        printf("\n");
    }


    printf("the matrix of range:%d and %d is as below\n",row,column);

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
      
        }
        printf("\n");

    }
    
    
    return 0;
}