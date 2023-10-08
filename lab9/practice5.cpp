/*. Write a C++ program to find the sum of two one-dimensional arrays using
 the function*/
#include <iostream>
using namespace std;

void addArrays(int arr1[], int arr2[], int size)
{
    int sum[size];
    for (int i = 0; i < size; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << "Sum of the two arrays is: ";
    for (int i = 0; i < size; i++)
    {
        cout << sum[i] << " ";
    }
}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {6, 7, 8, 9, 10};
    addArrays(A, B, 5);
    return 0;
}
