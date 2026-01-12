// 7. Write a program to count digits in a given number

#include<stdio.h>
int main() {
    int n,count=0;

    printf("Enter a Number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
         count++;
    }
    printf("%d\t",count);
    return 0 ;

}