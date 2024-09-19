#include<stdio.h>
int main(){
    int i,fibo,k,n1=0,n2=1;

    printf("Enter a nub :");
    scanf("%d", &k);

    printf("%d %d ", n1, n2);

    fibo = n1+n2;
    
    for ( i = 3; i <= k; i++)//important to remember
    {
        printf("%d ", fibo);
        n1 = n2;
        n2 = fibo;
        fibo = n1+n2;

    }
    
}