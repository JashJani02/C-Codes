#include<stdio.h>
#include <math.h>
#include <time.h>

int main ()
{

  printf("Practicle 5\nQuestion 5\nName:-Jash Jani\nEnrollment Number:-92400957004\n");

    float a,b;

    printf("enter value of a:");
    scanf("%f",&a);

    printf("enter value of b:");
    scanf("%f",&b);

    printf("%.2f is the ceil value of a\n%.2f is the ceil value of b\n%.2f is the floor value of a\n%.2f is the floor value of b\n%.2f is the round-off of a\n%.2f is the round-off of b\n",ceil(a),ceil(b),floor(a),floor(b),round(a),round(b));

    printf("\n***************************\n");

    printf("\nbelow given are some examples of the functions provided in the time header file\n");
printf("\n***************************\n");

    time_t current_time; // variable to store the current time
    time(&current_time); //for getting the current time
    
     printf("Current time in seconds since the Unix epoch: %ld\n", current_time);
      printf("Current time as a string: %s\n", ctime(&current_time));


    return 0;
}