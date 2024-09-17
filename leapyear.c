#include<stdio.h>
int main()
{
    int i;

    printf("Enter a year :");
    scanf("%d", &i);

    if (i%400==0){
         printf("Its a leap year");
    }
    else if(i%100==0) {
         printf("Not a leap year");
    }
    else if(i%4==0) {
        printf("Its");
    }
    else {
        printf("Its not leap");
    }
}