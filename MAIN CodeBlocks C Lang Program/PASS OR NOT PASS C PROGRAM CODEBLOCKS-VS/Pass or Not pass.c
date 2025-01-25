#include <stdio.h>
#include <math.h>

float main ()

{
    float m;


    printf ("Enter the value of marks acquired by the student =");
    scanf ("%f", & m);

    if (m>=35)
    {
        printf ("You have passed");
    }

    else
    {
        printf ("You have not passed");
    }

return 0;
}
