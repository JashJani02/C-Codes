#include <stdio.h>
#include <math.h>

float main ()

{
    float a, b;
    printf ("Enter the value of a=");
    scanf("%f", & a);

    printf ("Enter the value of b=");
    scanf ("%f", & b);

        printf ("Sum=%.2f\n", a+b);
        printf ("Difference=%.2f\n", a-b);
        printf ("Product=%.2f\n", a*b);
        printf ("Quotitent=%.2f\n", a/b);
        printf ("Square of a=%.2f\n", a*a);
        printf ("Square Root of a=%.2f\n", sqrt (a));
        printf ("Cube of a=%.2f\n", a*a*a);
        printf ("Cube root of a=%.2f\n", cbrt (a));
        printf ("Square of b=%.2f\n", b*b);
        printf ("Square Root of b=%.2f\n", sqrt (b));
        printf ("Cube of b=%.2f\n", b*b*b);
        printf ("Cube root of b=%.2f\n", cbrt (b));

        return 0;
}
