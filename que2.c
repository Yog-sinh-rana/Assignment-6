// 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main() {
    int i,n,sum=0;

    printf("Enter A Number:");
    scanf("%d",&n);
    for ( i = 1; i<=n; i++)
    {
        printf("%d\n",i*2);
        sum = sum + (i*2);
    }

    printf("%d\t",sum);
    return 0;
}