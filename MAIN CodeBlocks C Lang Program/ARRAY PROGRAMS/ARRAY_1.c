#include <stdio.h>
int main ()
{
    int i;
    int a[5] = {10,20,30,40,50};
    a[0]=60;
    for (i=0; i<=4; i++)
    {
    printf("%d\t",a[i]);
    }
return 0;
}
