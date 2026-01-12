// 10. Write a program to reverse a given number 

#include<stdio.h>
int main() {
    int i,n,rev=0,remainder;

    printf("Enter A Number:");
    scanf("%d",&n);
   while (n!=0)
   {
    remainder = n%10;
    n =n/10;
    rev = rev * 10 + remainder;

   }
   printf("%d is reverse\t",rev);
   
   return 0;
}