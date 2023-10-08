// 0. Write a C++ program to check whether a matrix is an identity matrix or
// not.
#include <iostream>
using namespace std;
int main()
{
    int A[10][10];
    int i, j, r, c, count = 0;
    cout << "enter the number of row and cloum";
    cin >> r >> c;
    cout << "enter the elements" << endl;
    for (i = 1; i <=r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "A[" << i << "]"
                 << "[" << j << "]=";
            cin >> A[i][j];
        }
        cout << endl;
    }
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
    // check identity matrix
    for (i = 1; i <=r; i++)
    {
        for (j = 1; j <=c; j++)
        {
            if (i > j || j > i)
            {
                if (A[i][j] != 0)
                {
                    count++;
                    goto x;
                }
            }

            if (i == j)

            {
                if (A[i][j] != 1)
                {
                    sum++;
                }
            }
        }
    }
x:
    if (count == 0 && sum == 0)
    {
        cout << "It's an identity matrix";
    }
    else
        cout << " Mateix A is not a identity matrix";
}