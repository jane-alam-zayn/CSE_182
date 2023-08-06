#include<stdio.h>
int main()
{
    int i,temp,n,sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    temp=n;
    while (temp != 0)
    {
        i=temp%10;
        sum=sum*10+i;
        temp=temp/10;

    }
    if(n==sum)
    printf("your number %d is palinndrom",n);
    else
     printf("your %d number isnot palinndrom",n);




}
