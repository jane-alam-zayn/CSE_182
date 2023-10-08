//2. Write a C program to print all negative elements in an array.
#include<stdio.h>
int main()
{
int s;
printf("Enter the size of array");
scanf("%d",&s);
int A[s];
for (int i=0;i<=s;i++)
{ 
    printf("A[%d]=",i);
    scanf("%d",&A[i]);
}
printf("You have entered:");
for(int i=0;i<=s;i++)
{
printf(" %d", A[i]);

}
printf("\n All negative elements in this array :");
for(int i=0;i<=s;i++)
{
    if(A[i]<0)
    {
printf(" %d", A[i]);
    }

}




}