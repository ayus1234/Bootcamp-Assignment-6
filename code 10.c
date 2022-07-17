//Program to reverse a given number

#include<stdio.h>
int main()
{
    int num,reverse,i;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(i=1;num!=0;i++)
    {
        reverse=num%10;
        num=num/10;
        printf("%d",reverse);
    }
    return 0;
}