#include<stdio.h>
int main(){
    long long i;
    int j=0;
printf("Enter nub :");
scanf("%lld", &i);

do 
{
    i/=10;
    ++j;
}while(i != 0);

printf("Digits %d", j);
    
}