#include <stdio.h>
#include <string.h>
int main ()
{
    char name[100]="yo";
    printf("enter something:");
    scanf("%s",& name);
    printf("hi %s", name);
    return 0;
}
