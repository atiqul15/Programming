#include<stdio.h>
int main(){

   int n1, n2, i, lcm, gcm ;

   printf("Enter two nub :");
   scanf("%d %d ", &n1, &n2);

   for ( i = 1; i <=n1 && i<=n2; i++)
   {
    if (n1%i==0 && n2%i==0)
    {
        gcm = i;
    }
    
   }
    lcm = (n1*n2)/gcm;
    printf(" LCM %d", lcm);

}