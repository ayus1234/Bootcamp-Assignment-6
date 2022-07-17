//Program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
        fact=fact*i;
    printf("Factorial of %d is %d",num,fact);
    return 0;
}