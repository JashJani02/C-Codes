#include <stdio.h>
int main ()
{
    printf("Practicle 4\nQuestion 2\nName:-Jash Jani\nEnrollment Number:-92400957004\n");
    int row,column,crow,ccolumn,updated_value;

    printf("enter rows:");
    scanf("%d",&row);

    printf("enter column:");
    scanf("%d",&column);

  int arr[row][column];

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("enter element [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }

        printf("\n");
    }

    printf("below given is the given matrix\n");

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }

        printf("\n");
    }

    printf("which row to change:[%d]",row-1);
    scanf("%d",&crow);

    printf("which column to change:[%d]",column-1);
    scanf("%d",&ccolumn);

     printf("Enter new value for element [%d][%d]: ", crow, ccolumn);
        scanf("%d", &updated_value);
        
        arr[crow][ccolumn] = updated_value;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
              printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}