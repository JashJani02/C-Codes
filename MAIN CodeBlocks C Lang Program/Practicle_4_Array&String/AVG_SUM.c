#include<stdio.h>
int main ()
{
      printf("Practicle 4\nQuestion 4\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    int num;

    printf("enter for number of elements in array:");
    scanf("%d",&num);

    int arr[num];

    for (int i=0;i<num;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

        int sum=0;

    for (int i=0;i<num;i++)
    {
         sum+=arr[i];
    }

    float avg= sum/num;

    printf("sum=%d\n",sum);
    printf("average=%.2f",avg);

    return 0;
}