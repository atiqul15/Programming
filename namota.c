#include<stdio.h>
int main(){
    int i,j;

    printf("Enter namota nub");
    scanf("%d", &j);

    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",j,i,i*j);
    }
    
}