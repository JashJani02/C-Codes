#include <stdio.h>
#include <string.h>
int main ()
{
 char name1 [100],name2 [100];

 printf("enter first name:");
 gets(name1);
 printf("enter last name:");
 gets(name2);

 printf(" Hey there, %s %s!", name1,name2);

return 0;
}
