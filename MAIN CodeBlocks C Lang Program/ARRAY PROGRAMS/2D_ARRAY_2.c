#include <stdio.h>

int main() 
{
  
    int range[3][3] = 
    {
        {100, 600, 400},
        {800, 345, 531},
        {434, 682, 998}
    };

   
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t",range[i][j]); 
        }
        printf("\n"); 
    }
    
    return 0;
}