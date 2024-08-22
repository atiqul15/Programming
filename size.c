/*this is code of sizeof %zu that is used for 
knowing size of a variable*/

#include<stdio.h>
int main()
{
    int i;
    float j;
    double k;
    char c;

    printf("Size of int :%zu bytes\n" , sizeof(i));
    printf("Size of float :%zu bytes\n" , sizeof(j));
    printf("Size of double :%zu bytes\n" , sizeof(k));
    printf("Size of char :%zu bytes" , sizeof(c));

}