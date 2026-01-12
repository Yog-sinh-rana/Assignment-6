// 4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter A Number:");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
         printf("%d\n",i*i);
         sum = sum + (i*i);
    }

   printf("Sum is = %d",sum);
    return 0; 
    
}