for (i = 1; i <= num; i++) 
    {
        
        for (j = i; j < num; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }