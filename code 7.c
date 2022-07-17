//Program to count digits in a given number

#include<stdio.h>
int main()
{
    int num,count;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(count=0;num!=0;count++)
        num=num/10;
    printf("Total Number of Digits is %d",count);
    return 0;
}