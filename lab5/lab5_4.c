//write a c program to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("enter a number ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
         count++;
            break;
        }
    }
    if(count>0)
    printf("this is not a prime number");
    else
        printf("this is a prime number");



}
