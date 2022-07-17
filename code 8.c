//Program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
           break;
    }
    if(num==i)
       printf("%d is a Prime Number",num);
    else
       printf("%d is not a Prime Number",num);
    return 0;
}