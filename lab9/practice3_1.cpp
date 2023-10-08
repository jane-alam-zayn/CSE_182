/*3. Write a C++ program to get the largest element of an array using the function.*/
#include <iostream>
using namespace std;

int findLargest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int A[6] = {1, 3, 3, 4, 6, 5};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "The largest element in the array is: " << findLargest(A, n);
    return 0;
}
