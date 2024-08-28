#include<stdio.h>
int main()
{
    int i,n,j;
     printf("Enter num :");
     scanf("%d", &n);

    for(i=1;i<=n;i++){
         printf(" %d\t", 2*i-1);
          j+=2*i-1;    
    }
    printf("Sum is:%d", j);
}