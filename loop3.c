#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter num :");
     scanf("%d", &k);

    for ( i = 1; i < k; i++)
    {
        for ( j = 0; j < i; j++)
        
          printf("*");  
        
        printf("\n");
        
    }
    
}