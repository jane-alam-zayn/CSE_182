#include<stdio.h>
int main()
{
    int num,x,count=0;
    printf("enter a number ");
    scanf("%d",&num);
    while(num!=0)
    {
        x=num%10;
        num=num/10;
        count=count+x;

    }
    if(count<0)
    {
        count=count*-1;
    }
    printf("%d",count);

}
