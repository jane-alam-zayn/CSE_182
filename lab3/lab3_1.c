//1. Write a C program to find maximum between three number
#include<stdio.h>
int main ()
{
int num1,num2,num3;
printf("Enter three number ");
scanf("%d %d %d",&num1,&num2,num3);
if(num1>num2 && num1>num3)
printf("Maximum number is %d",num1);
else if(num2>num1 && num1>num3)
printf("Maximum numbr is %d",num2);
else
printf("Maximum number is %d",num3);




}