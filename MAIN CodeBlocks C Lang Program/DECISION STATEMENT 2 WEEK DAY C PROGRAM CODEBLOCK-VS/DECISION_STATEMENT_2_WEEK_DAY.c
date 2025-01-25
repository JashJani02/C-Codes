#include <stdio.h>
int main ()
{
    char day;
printf ("Select your day by tapping the numbers:- 1,2,3,4,5,6,7\n ");

    printf ("Select your day:-");
    scanf ("%c", & day);

    switch (day)
    {
        case '1':
        printf ("Monday");
        break;


        case '2':
        printf ("Tuesday");
            break;

        case '3':
        printf ("Wednesday");
        break;

         case '4':
        printf ("Thursday");
        break;

        case '5':
        printf ("Friday");
        break;

        case '6':
        printf ("Saturday");
        break;

        case '7':
        printf ("Sunday");
        break;
    }

    return 0;
}
