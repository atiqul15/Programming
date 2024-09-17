#include<stdio.h>
int main()
{
    int a,b,c,d,spc;
     
    printf("Enter num :");
    scanf("%d", &a);
    spc = a + 4 - 1;

    for ( b = 1; b <= a; b++)
    {
        for ( c = spc; c >= 1; c--)
        {
            printf(" ");
        }
        for ( d = 1; d <= b; d++);
        {
            printf("* ");
        
        }
        printf("\n");
        spc--;
    }
    
}
