#include<stdio.h>
int main()
{
    int i;
    printf("Enter your exam mark :");
    scanf("%d", &i);

    if(i>=80){
        printf("A+");
    }
    else if(i<=79 && i>=75){
        printf("A");
    }
    else if(i<=74 && i>=70){
        printf("A-");
    }
    else if(i<=69 && i>=65){
        printf("B+");
    }
    else if(i<=64 && i>=60){
        printf("B");
    }
    else if(i<=59 && i>=55){
        printf("B-");
    }
    else{
        printf("Fail");
    }
  
  return 0;
}