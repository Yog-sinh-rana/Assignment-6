// 6. Write a program to calculate factorial of a number

#include<stdio.h>
int main() {
    int i,n,fact=1;

    printf("Enter A number:");
    scanf("%d",&n);

    for ( i = 1; i<=n; i++)
    {
    
     fact = fact * i;          
        printf("%d\n",i);
    }
   printf("%d\t",fact);
   
   return 0 ;
}