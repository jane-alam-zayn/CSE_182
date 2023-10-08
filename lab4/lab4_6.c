#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a number ");
    scanf("%d",&n);
if(n<0)
    n=n*-1;
if(n!=0)
    {
    while (n>0)
    {
        count=count+1;

        n=n/10;
    }
    printf("%d",count);
}
else
    printf("one");
}
