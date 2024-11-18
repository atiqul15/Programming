#include<stdio.h>
int main(){
    int n,k=0,r,s;

    printf("Enter num :");
    scanf("%d", &n);

  while (n != 0)
  {
    r = n % 10 ;
    k = k * 10 + r;
    n = n / 10;
  }
  
    
printf("Reversed nub is %d", k );

return 0;
    
}
