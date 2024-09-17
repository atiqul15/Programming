#include<stdio.h>
int main()
{
   int i,k=1,j,l,spc,p;

   printf("Enter row nub :");
   scanf("%d", &l);
   spc =l+4-1;


for ( i = 1; i <= l; i++){
        for ( j = spc; j >= 1; j--){
            printf(" ");
        }
        for(p=1;p<=i;p++){
        
          printf("%d ",k++); 
           
        }
        printf("\n");
        spc--;
}
  
    
}    