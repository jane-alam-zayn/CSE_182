//5. Write a C program to find the reverse of an array.
#include<stdio.h>
int main()
{
int i,j,n;
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
}
printf("\n The reversed elements are :");
for(i=n-1;i>=0;i--)
{
    printf("%d",A[i]);
}


}