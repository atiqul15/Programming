#include<stdio.h>
int main(){
    int i,sum=1,j;

    scanf("%d", &i);

    for(j=1; j<=i; j++){
       sum=sum*j;
       
    }
    printf("Factorial is :%d" , sum);
}