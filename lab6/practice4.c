//4. Write a C program to copy all elements from an array to another array
#include<stdio.h>
int main()
{
int i,j,n;
printf("input the number of elelments");
scanf("%d",&n);
int A[n],B[n];
printf("input the elements :");
for(i=0;i<n;i++)
{
printf("A[%d]=",i);
scanf("%d",&A[i]);

}

printf("The elements are :");
for(i=0;i<n;i++)
{
    printf("%d",A  [i]);
}
//copying  the elements
for(i=0;i<n;i++)
{
B[i]=A[i];


}
//printing b
printf("\nThe elements of B are :");
for(i=0;i<n;i++)
{
    printf("  %d",B[i]);
}


}
