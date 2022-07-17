//Program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++) 
        sum=sum+2*i-1;
    printf("Sum is %d ",sum);
    return 0;
}