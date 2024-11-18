#include<stdio.h>
int main(){

   int n1, n2, i, lcm, gcm, gcd,j ;

   
   scanf("%d %d ", &n1, &n2);

   for ( i = 1; i <=n1 ; i++)
   {
    if (n1%i==0 )
    {
        gcm = i;
    }
    
   }
    for ( j = 1; j<=n2; j++)
    {
        if ( n2%j==0)
        {
            gcd= j;
        }
        
        
    }
    lcm = (n1)/gcm;
    printf("%d %d", lcm,gcd);

}
