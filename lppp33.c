#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter num :");
     scanf("%d", &k);

    for ( i = 1; i < k; i++)
    {
        for ( j = 1; j < i; j++)
        {
          printf("%d",j);  
        }
        printf("\n");
        
    }


    for ( i = 1; i < k; i++)
    {
        for ( j = 0; j < i; j++)
        {
          printf("%d",i);  
        }
        printf("\n");
        
    }

    
    
}