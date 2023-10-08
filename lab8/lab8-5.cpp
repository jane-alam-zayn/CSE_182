/*5. Write a C++ program to find the sum of the main diagonal elements of a
matrix*/
#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j;
    int A[10][10];
    cout << "Enter the number of Row And Colum for matrix A :";
    cin >> r >> c;
    cout << "Enter element A matrix: " << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "A[" << i << "]"
                 << "[" << j << "]=";
            cin >> A[i][j];
        }
        cout << endl;
    }

    // printining a matrix
    cout << "Matrix A =" << endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << A[i][j] << "   ";
        }
        cout << endl;
    }

    int sum = 0;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }

    cout << "Sum of the all digonal element  =  " << sum;
}
