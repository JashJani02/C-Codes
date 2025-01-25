/*BITWISE OPERATORS:-
    THE OPERATORS WHICH ARE USED FOR BIT-LEVEL OPERATIONS ON
    THE OPERANDS. FIRST THE OPERATORS ARE CONVERTED FIRST TO BIT-LEVEL
    AND THEN THE CALCULATIONS ARE PERFORMED
*/
#include <stdio.h>
int main ()
{
int x=12;
x>>=2;
printf("%d",x);
//divides/reduces the number by 2 and shifts the bits to the right
return 0;
}
