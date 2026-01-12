// 8. Write a program to check whether a given number is a Prime number or
// not

#include<stdio.h>
int main() {
    int i,n,flag=0 ;

    printf("Enter A Number:");
    scanf("%d",&n);

    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
        if (flag==1)
             printf("Not Prime Number\t");
        else 
           printf("Number Is PRIME\t");
        
        return 0 ;
   
    
}