//Program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int num1,num2,i;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1>num2?num1:num2;i<=num1*num2;i+=num1>num2?num1:num2)
    {
        if(i%num1==0 && i%num2==0)
           break;
    }
    printf("LCM of %d and %d is %d",num1,num2,i);
    return 0;
}