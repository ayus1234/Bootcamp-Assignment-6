//Program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        sum=sum+2*i;
    printf("Sum is %d",sum);
    return 0;
}