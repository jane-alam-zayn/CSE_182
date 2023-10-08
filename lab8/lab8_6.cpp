/*6. Write a C++ program to find the sum of the minor diagonal elements of a
matrix.*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    int A[10][10];
    cout << "Enter the size of square matrix A :";
    cin >> n;
    cout << "Enter element A matrix: " << endl;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "A[" << i << "]"
                 << "[" << j << "]=";
            cin >> A[i][j];
        }
        cout << endl;
    }

    // printining A matrix
    cout << "Matrix A =" << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << A[i][j] << "   ";
        }
        cout << endl;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += A[i][n - i+1];
    }

    cout << "Sum of the all minor  digonal element  =  " << sum;
}
