#include<stdio.h>
int main()
{
    int X,Y,summation,multiplication,subtraction;
    scanf("%d %d", &X,&Y);
 summation = X + Y;
 multiplication = X * Y;
 subtraction = X - Y;

 printf("%d + %d = %d\n",X,Y,summation);
 printf("%d * %d = %d\n",X,Y,multiplication);
 printf("%d - %d = %d",X,Y,subtraction);

}