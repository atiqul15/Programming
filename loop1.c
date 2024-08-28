#include<stdio.h>
int main()
{
    int i, sum=0; 
    float avg,j;
    printf("Enter num :");
    scanf("%f", &j);

    for(i=1; i<=j;i++){
        
        sum+=i;
        
    }
    printf("Total sum is : %d\n",sum);

    avg= sum/j;

    printf("Avg is :%f", avg);
}