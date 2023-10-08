#include <iostream>
using namespace std;
int ArraySum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return arr[n - 1] + ArraySum(arr, n - 1);
    }
}
int main()
{
    int arr[] = {6, 2, 3, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of the elements: " << ArraySum(arr, n) << endl;
    return 0;
}
