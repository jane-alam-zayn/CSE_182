#include<stdio.h>

int main()
{
    int n,first,last,i=0;
    scanf("%d",&n);
   while(n>0)
{ if(i==0)
{
    last=n%10;
    n/=10;
    i++;
}
else
{
    first=n%10;
    n/=10;
}
}
printf("First digit %d \n Last digit %d",first,last);

}
