#include<stdio.h>
int main()
{
    int i,j;
    char sign;

    printf("Choose any (+,-,*,/) :");
    scanf("%c", &sign);

    printf("Enter two numbers :");
    scanf("%d %d", &i,&j);

    switch (sign)
    {
    case '+' : 
    printf("Ans : %d + %d = %d", i,j,i+j);
        break;
    case '-' : 
    printf("Ans : %d - %d = %d", i,j,i-j);
        break;
    case '*' : 
    printf("Ans : %d * %d = %d", i,j,i*j);
        break;
    case '/' : 
    printf("Ans : %d / %d = %d", i,j,i/j);
        break;
    
    default:
    printf("Error happened");
        break;
    }
   
}
