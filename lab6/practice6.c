//6. Write a C Program to find the sum of n numbers using array
#include<stdio.h>
int main ()
{
int i,j,n,sum=0;
printf("input the number of elelments");
scanf("%d",&n);
int A[n],B[n];
printf("input the elements :\n");
for(i=0;i<n;i++)
{
printf(" A[%d]=",i);
scanf("%d",&A[i]);

}
printf("The elements are :");
for(i=0;i<n;i++)
{
    printf("%d ",A[i]);
    sum=sum+A[i];
}

printf("\nThe sum is =%d",sum);

}