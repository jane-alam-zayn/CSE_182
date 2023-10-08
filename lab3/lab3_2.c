//2. Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
int main ()
{

 int n;
printf("enter a number to check whether a number is negative, positive or zero:  ");
scanf("%d",&n);
if(n==0)
printf("Zero");
else if(n>0)
printf("Number is positive");
else 
printf("Number is negative");




}