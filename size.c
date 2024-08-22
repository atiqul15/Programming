/*this is code of sizeof that is used for 
knowing size of a variable*/

#include<stdio.h>
int main()
{
    int i;
    float j;
    double k;
    char c;

    printf("Size of int :%d bytes\n" , sizeof(i));
    printf("Size of float :%d bytes\n" , sizeof(j));
    printf("Size of double :%d bytes\n" , sizeof(k));
    printf("Size of char :%d bytes" , sizeof(c));

}